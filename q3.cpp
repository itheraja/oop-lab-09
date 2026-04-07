#include "Book.h"

// Constructor implementation
Book::Book(string t, string a, string i) {
    title = t;
    author = a;
    ISBN = i;
}

// Getter implementations
string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

string Book::getISBN() {
    return ISBN;
}
