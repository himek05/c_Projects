#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

#define MAX_BOOKS 100

Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount < MAX_BOOKS) {
        Book newBook;
        printf("Enter book ID: ");
        scanf("%d", &newBook.id);
        printf("Enter book title: ");
        getchar(); // to consume the newline left by previous input
        fgets(newBook.title, sizeof(newBook.title), stdin);
        newBook.title[strcspn(newBook.title, "\n")] = '\0'; // remove newline character
        printf("Enter book author: ");
        fgets(newBook.author, sizeof(newBook.author), stdin);
        newBook.author[strcspn(newBook.author, "\n")] = '\0';
        printf("Enter year of publication: ");
        scanf("%d", &newBook.year);
        library[bookCount++] = newBook;
        printf("Book added successfully!\n");
    } else {
        printf("Library is full!\n");
    }
}

void displayBooks() {
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Year: %d\n", library[i].year);
        printf("\n");
    }
}

void searchBook() {
    int id;
    printf("Enter book ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            printf("ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Year: %d\n", library[i].year);
            return;
        }
    }
    printf("Book not found!\n");
}

void updateBook() {
    int id;
    printf("Enter book ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            printf("Enter new title: ");
            getchar(); // to consume the newline left by previous input
            fgets(library[i].title, sizeof(library[i].title), stdin);
            library[i].title[strcspn(library[i].title, "\n")] = '\0';
            printf("Enter new author: ");
            fgets(library[i].author, sizeof(library[i].author), stdin);
            library[i].author[strcspn(library[i].author, "\n")] = '\0';
            printf("Enter new year of publication: ");
            scanf("%d", &library[i].year);
            printf("Book updated successfully!\n");
            return;
        }
    }
    printf("Book not found!\n");
}

void deleteBook() {
    int id;
    printf("Enter book ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            for (int j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];
            }
            bookCount--;
            printf("Book deleted successfully!\n");
            return;
        }
    }
    printf("Book not found!\n");
}

void loadBooks() {
    FILE *file = fopen("library.dat", "rb");
    if (file) {
        fread(&bookCount, sizeof(int), 1, file);
        fread(library, sizeof(Book), bookCount, file);
        fclose(file);
    }
}

void saveBooks() {
    FILE *file = fopen("library.dat", "wb");
    if (file) {
        fwrite(&bookCount, sizeof(int), 1, file);
        fwrite(library, sizeof(Book), bookCount, file);
        fclose(file);
    }
}
