#pragma once

#include <vector>
#include <algorithm>

#include "Book.h"

using namespace std;

class Books {
private:
    vector<Book*> _books;

    static bool ComparatorByTitle(Book* book1, Book* book2) {
        return book1->GetTitle() < book2->GetTitle();
    }

public:
    void AddBook(Book* book) {
        _books.push_back(book);
    }

    vector<Book*> GetAll() {
        return _books;
    }

    vector<Book*> GetBooksByAuthor(string name) {
        vector<Book*> books;

        for (auto book : _books) {
            auto last_name = book->GetAuthor()->GetLastName();
            auto first_name = book->GetAuthor()->GetFirstName();
            if (last_name == name || first_name == name) {
                books.push_back(book);
            }
        }

        return books;
    }

    vector<Book*> GetBooksByTitle(string title) {
        vector<Book*> books;

        for (auto book : _books) {
            if (book->GetTitle() == title) {
                books.push_back(book);
            }
        }

        return books;
    }

    void SortByTitle() {
        sort(_books.begin(), _books.end(), ComparatorByTitle);
    }

};

