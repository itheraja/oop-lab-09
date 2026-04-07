#include <iostream>
#include "Book.h"
using namespace std;

int main() {
    // Create a Book object
    Book b1("The Great Gatsby", "F. Scott Fitzgerald", "978-0743273565");

    // Display book details
    cout << "Book Title: " << b1.getTitle() << endl;
    cout << "Author: " << b1.getAuthor() << endl;
    cout << "ISBN: " << b1.getISBN() << endl;

    return 0;
}
