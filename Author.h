#pragma once

#include <string>

#include "Date.h"

using namespace std;

class Author {
private:
    string _last_name;
    string _first_name;
    Date* _date_of_birth; //TODO
    Date* _date_of_death; //TODO

public:
    Author(string lastName, string firstName) : _last_name(lastName), _first_name(firstName) {
        _date_of_birth = nullptr;
        _date_of_death = nullptr;
    }

    string FullName() {
        return _last_name + " " + _first_name;
    }

    string GetLastName() {
        return _last_name;
    }

    string GetFirstName() {
        return _first_name;
    }
};
