import tkinter as tk
from tkinter import scrolledtext, filedialog, messagebox
import socket
import threading
import os

HOST = '10.40.254.143'  # server IP
PORT = 8080

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect((HOST, PORT))

# --- GUI Setup ---
root = tk.Tk()
root.title("TCP Chat Client GUI")

chat_box = scrolledtext.ScrolledText(root, width=60, height=20, wrap=tk.WORD)
chat_box.pack(padx=10, pady=10)
chat_box.config(state=tk.DISABLED)

entry = tk.Entry(root, width=50)
entry.pack(side=tk.LEFT, padx=10, pady=10)

def send_message():
    msg = entry.get()
    if msg:
        client_socket.send(msg.encode())
        chat_box.config(state=tk.NORMAL)
        chat_box.insert(tk.END, f"You: {msg}\n")
        chat_box.config(state=tk.DISABLED)
        entry.delete(0, tk.END)

def send_file():
    filepath = filedialog.askopenfilename()
    if not filepath:
        return
    filesize = os.path.getsize(filepath)
    filename = os.path.basename(filepath)
    try:
        client_socket.send(f"FILE {filesize} {filename}".encode())
        with open(filepath, "rb") as f:
            while True:
                data = f.read(1024)
                if not data:
                    break
                client_socket.sendall(data)
        chat_box.config(state=tk.NORMAL)
        chat_box.insert(tk.END, f"File sent: {filename}\n")
        chat_box.config(state=tk.DISABLED)
    except:
        messagebox.showerror("Error", "Failed to send file!")

send_button = tk.Button(root, text="Send", command=send_message)
send_button.pack(side=tk.LEFT, padx=5, pady=10)

file_button = tk.Button(root, text="Send File", command=send_file)
file_button.pack(side=tk.RIGHT, padx=5, pady=10)

# --- Receive messages ---
def receive_messages():
    while True:
        try:
            data = client_socket.recv(1024)
            if not data:
                break
            text = data.decode(errors='ignore')
            if text.startswith("FILE "):
                parts = text.split()
                filesize = int(parts[1])
                filename = parts[2]
                with open(filename, "wb") as f:
                    received = 0
                    while received < filesize:
                        chunk = client_socket.recv(min(1024, filesize - received))
                        if not chunk:
                            break
                        f.write(chunk)
                        received += len(chunk)
                chat_box.config(state=tk.NORMAL)
                chat_box.insert(tk.END, f"Received file: {filename}\n")
                chat_box.config(state=tk.DISABLED)
            else:
                chat_box.config(state=tk.NORMAL)
                chat_box.insert(tk.END, f"{text}\n")
                chat_box.config(state=tk.DISABLED)
        except:
            break

threading.Thread(target=receive_messages, daemon=True).start()
root.mainloop()

