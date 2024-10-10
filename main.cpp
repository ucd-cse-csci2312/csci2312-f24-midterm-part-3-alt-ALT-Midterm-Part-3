#include "Book.h"
#include <iostream>
#include <stdexcept>

int main() {
    // Create a book with an initial number of copies
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "978-0743273565", 5);

    // Test normal borrowing
    try {
        book1.borrowBook();
        std::cout << "Borrowed a copy of '" << book1.getTitle() << "'. Available copies: " 
                  << book1.getAvailableCopies() << std::endl;
    } catch (const char* e) {
        std::cerr << "Error: " << e << std::endl;
    }

    // Borrow more books until there are no more available
    try {
        while (book1.isAvailable()) {
            book1.borrowBook();
            std::cout << "Borrowed a copy of '" << book1.getTitle() << "'. Available copies: " 
                      << book1.getAvailableCopies() << std::endl;
        }
    } catch (const char* e) {
        std::cerr << "Error: " << e << std::endl;
    }

    // Try borrowing when no copies are available (edge case)
    try {
        book1.borrowBook();
    } catch (const char* e) {
        std::cerr << "Error: " << e << std::endl;
    }

    // Test returning a book
    try {
        book1.returnBook();
        std::cout << "Returned a copy of '" << book1.getTitle() << "'. Available copies: " 
                  << book1.getAvailableCopies() << std::endl;
    } catch (const char* e) {
        std::cerr << "Error: " << e << std::endl;
    }

    // Test returning more copies than owned (over-return edge case)
    try {
        for (int i = 0; i < 6; i++) {
            book1.returnBook();
            std::cout << "Returned a copy of '" << book1.getTitle() << "'. Available copies: " 
                      << book1.getAvailableCopies() << std::endl;
        }
    } catch (const char* e) {
        std::cerr << "Error: " << e << std::endl;
    }

    return 0;
}
