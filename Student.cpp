#include "Student.h"

// The constructor only accepts valid year and ticket values.
Student::Student(string n, string pw, string p, int y, int t, int c) {
    name = n;
    password = pw;
    programName = p;
    if (y == 2) {
        year = 2;
    } else {
        year = 1;
    }
    if (t == 2) {
        ticket = 2;
    } else {
        ticket = 1;
    }
    chair = c;
}

bool Student::checkPassword(string attempt) const {
    return attempt == password;
}

string Student::getName() const {
    return name;
}

string Student::getProgramName() const {
    return programName;
}

int Student::getYear() const {
    return year;
}

int Student::getTicket() const {
    return ticket;
}

int Student::getChair() const {
    return chair;
}

string Student::getTicketName() const {
    if (ticket == 2) {
        return "Meal ($10) - includes a meal and a coke";
    }
    return "Basic (free) - includes a drink";
}

int Student::getPrice() const {
    if (ticket == 2) {
        return 10;
    }
    return 0;
}
