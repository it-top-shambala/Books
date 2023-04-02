#include <iostream>

#include "Books.h"

using namespace std;

void PrintBooks(Books* books);
void PrintBooks(vector<Book*> books);

int main() {
    auto* books = new Books();
    books->AddBook(new Book("Book 1", new Author("A", "AA")));
    books->AddBook(new Book("A book", new Author("A", "BB")));

    cout << "Unsorted list" << endl;
    PrintBooks(books);
    cout << endl;

    cout << "Sorted list" << endl;
    books->SortByTitle();
    PrintBooks(books);
    cout << endl;

    cout << "GetBooksByTitle(\"Book 1\")" << endl;
    auto result = books->GetBooksByTitle("Book 1");
    PrintBooks(result);
    cout << endl;

    cout << "GetBooksByAuthor(\"A\")" << endl;
    result = books->GetBooksByAuthor("A");
    PrintBooks(result);
    cout << endl;

    return 0;
}

void PrintBooks(Books* books) {
    PrintBooks(books->GetAll());
}

void PrintBooks(vector<Book*> books) {
    for (auto book : books) {
        cout << book->GetTitle() << ". " << book->GetAuthor()->FullName() << endl;
    }
}