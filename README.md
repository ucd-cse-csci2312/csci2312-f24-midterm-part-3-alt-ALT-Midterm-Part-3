# Library System: Book Class

This project implements a simple `Book` class for a library management system. The `Book` class models the essential attributes of a book and provides methods for borrowing, returning, and checking availability of copies. The system includes error handling to prevent invalid actions, such as borrowing a book when none are available or returning more copies than are owned by the library.

## Class Specification

### Attributes (Private Members):
1. **title**: `std::string` — The title of the book.
2. **author**: `std::string` — The name of the author.
3. **ISBN**: `std::string` — A unique identifier for the book (International Standard Book Number).
4. **totalCopies**: `int` — The total number of copies the library owns.
5. **availableCopies**: `int` — The number of copies currently available for borrowing.

### Methods (Public Members):

1. **Constructor:**
   - `Book(std::string _title, std::string _author, std::string _ISBN, int _totalCopies)`: Initializes the title, author, ISBN, total copies, and sets the available copies to match the total copies.

2. **Getters:**
   - `std::string getTitle()`: Returns the title of the book.
   - `std::string getAuthor()`: Returns the author of the book.
   - `std::string getISBN()`: Returns the ISBN of the book.
   - `int getTotalCopies()`: Returns the total number of copies owned by the library.
   - `int getAvailableCopies()`: Returns the number of copies currently available for borrowing.

3. **Setters:**
   - `void setTitle(std::string _title)`: Updates the book's title.
   - `void setAuthor(std::string _author)`: Updates the book's author.
   - `void setISBN(std::string _ISBN)`: Updates the book's ISBN.
   - `void setTotalCopies(int _totalCopies)`: Updates the total number of copies. Must adjust available copies accordingly.
   - `void setAvailableCopies(int _availableCopies)`: Updates the number of available copies.

4. **Borrow a Book:**
   - `void borrowBook()`: Reduces the available copies by 1 if copies are available. If no copies are available, an exception is thrown.

5. **Return a Book:**
   - `void returnBook()`: Increases the available copies by 1, but only if the available copies are less than the total number of owned copies. If over-returning, an exception is thrown.

6. **Check Availability:**
   - `bool isAvailable()`: Returns `true` if there is at least one copy available for borrowing, otherwise returns `false`.

### Error Handling:

- **Borrowing a Book:** If a user tries to borrow a book when no copies are available, an exception will be thrown to notify the user of the issue.
- **Returning a Book:** If a user tries to return more copies than are owned by the library (over-return), an exception will be thrown to prevent invalid data.

