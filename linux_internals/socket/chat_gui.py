import tkinter as tk
from tkinter import scrolledtext
import subprocess
import threading

# Start the C backend as a subprocess
proc = subprocess.Popen(
    ["./backend"], stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True
)

# --- GUI Setup ---
root = tk.Tk()
root.title("TCP Chat Client GUI")

chat_box = scrolledtext.ScrolledText(root, width=50, height=20, wrap=tk.WORD)
chat_box.pack(padx=10, pady=10)
chat_box.config(state=tk.DISABLED)

entry = tk.Entry(root, width=40)
entry.pack(side=tk.LEFT, padx=10, pady=10)

def send_message():
    msg = entry.get() + "\n"
    proc.stdin.write(msg)
    proc.stdin.flush()
    entry.delete(0, tk.END)
    chat_box.config(state=tk.NORMAL)
    chat_box.insert(tk.END, f"You: {msg}")
    chat_box.config(state=tk.DISABLED)

send_button = tk.Button(root, text="Send", command=send_message)
send_button.pack(side=tk.RIGHT, padx=10, pady=10)

# --- Read messages from C backend ---
def read_from_backend():
    while True:
        line = proc.stdout.readline()
        if not line:
            break
        chat_box.config(state=tk.NORMAL)
        chat_box.insert(tk.END, f"Server: {line}")
        chat_box.config(state=tk.DISABLED)

thread = threading.Thread(target=read_from_backend, daemon=True)
thread.start()

root.mainloop()

