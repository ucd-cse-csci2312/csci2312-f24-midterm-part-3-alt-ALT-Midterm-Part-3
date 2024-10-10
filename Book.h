#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;          // The title of the book
    std::string author;         // The author of the book
    std::string ISBN;           // The ISBN number of the book
    int totalCopies;            // Total number of copies the library owns
    int availableCopies;        // Number of available copies for borrowing

public:
    // Constructor to initialize the book's details
    Book(std::string _title, std::string _author, std::string _ISBN, int _totalCopies);

    // Getters to access private members
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    int getTotalCopies() const;
    int getAvailableCopies() const;

    // Setters to modify the book's details
    void setTitle(std::string _title);
    void setAuthor(std::string _author);
    void setISBN(std::string _ISBN);
    void setTotalCopies(int _totalCopies);
    void setAvailableCopies(int _availableCopies);

    // Borrow a book - reduces availableCopies by 1
    void borrowBook();

    // Return a book - increases availableCopies by 1, if not over the totalCopies
    void returnBook();

    // Check if the book is available for borrowing
    bool isAvailable() const;
};

#endif // BOOK_H
