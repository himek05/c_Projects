#ifndef LIBRARY_H
#define LIBRARY_H

typedef struct {
    int id;
    char title[50];
    char author[50];
    int year;
} Book;

void addBook();
void displayBooks();
void searchBook();
void updateBook();
void deleteBook();
void loadBooks();
void saveBooks();

#endif // LIBRARY_H
