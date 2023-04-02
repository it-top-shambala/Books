#pragma once

#include <string>

#include "Date.h"
#include "Author.h"

using namespace std;

class Book {
private:
    string _title;
    Author* _author;
    Date* _date_of_publication;
    string _publishing_house;

public:
    Book(string title, Author* author, Date* dateOfPublication, string publishingHouse) : _title(title),
                                                                                                        _author(author),
                                                                                                        _date_of_publication(
                                                                                                                dateOfPublication),
                                                                                                        _publishing_house(
                                                                                                                publishingHouse) {}

    Book(string title, Author *author) : _title(title), _author(author) {
        _date_of_publication = nullptr;
        _publishing_house = "";
    }

    string GetTitle() {
        return _title;
    }

    Author* GetAuthor() const {
        return _author;
    }

    Date* GetDateOfPublication() const {
        return _date_of_publication;
    }

    string GetPublishingHouse() {
        return _publishing_house;
    }
};