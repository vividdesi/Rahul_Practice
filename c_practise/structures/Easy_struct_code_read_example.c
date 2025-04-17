#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book {
    char *title;
    char *author;
    float price;
} Book;

// Function declarations
Book* create_book();
void input_book(Book *b);
void print_book(const Book *b);
void free_book(Book *b);

int main() {
    Book *b1 = create_book();
    if (b1 == NULL) {
        printf("Failed to create book\n");
        return 1;
    }

    input_book(b1);
    print_book(b1);
    free_book(b1);
    return 0;
}

// Function to dynamically allocate a book
Book* create_book() {
    Book *b = malloc(sizeof(Book));
    if (!b) return NULL;
    b->title = NULL;
    b->author = NULL;
    b->price = 0.0f;
    return b;
}

// Function to take input from user
void input_book(Book *b) {
    int n, m;

    printf("Enter title size: ");
    scanf("%d", &n);
    getchar();
    if (n <= 0) {
        printf("Invalid title size\n");
        return;
    }

    b->title = malloc((n + 1) * sizeof(char));
    if (!b->title) {
        printf("Memory allocation failed for title\n");
        return;
    }

    printf("Enter title: ");
    fgets(b->title, n + 1, stdin);
    b->title[strcspn(b->title, "\n")] = '\0';

    printf("Enter author size: ");
    scanf("%d", &m);
    getchar();
    if (m <= 0) {
        printf("Invalid author size\n");
        return;
    }

    b->author = malloc((m + 1) * sizeof(char));
    if (!b->author) {
        printf("Memory allocation failed for author\n");
        return;
    }

    printf("Enter author name: ");
    fgets(b->author, m + 1, stdin);
    b->author[strcspn(b->author, "\n")] = '\0';

    printf("Enter price: ");
    scanf("%f", &b->price);
}

// Function to print book data
void print_book(const Book *b) {
    if (!b || !b->title || !b->author) {
        printf("Book data is incomplete\n");
        return;
    }
    printf("\n----- Book Info -----\n");
    printf("Title  : %s\n", b->title);
    printf("Author : %s\n", b->author);
    printf("Price  : %.2f\n", b->price);
}

// Function to free memory
void free_book(Book *b) {
    if (!b) return;
    free(b->title);
    free(b->author);
    free(b);
}

