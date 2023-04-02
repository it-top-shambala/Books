# pragma once

#include <string>

using namespace std;

class Date {
private:
    int _day;
    int _month;
    int _year;

public:
    Date(int day, int month, int year) : _day(day), _month(month), _year(year) {}

    string ToString() {
        return to_string(_day) + "." + to_string(_month) + "." + to_string(_year);
    }

    int GetYear() {
        return _year;
    }
};

