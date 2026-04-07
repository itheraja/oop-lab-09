#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;

public:
    // Constructor
    Book(string t, string a, string i);

    // Getter functions
    string getTitle();
    string getAuthor();
    string getISBN();
};

#endif
