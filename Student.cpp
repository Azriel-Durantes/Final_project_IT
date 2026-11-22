#include "Student.h"

Student::Student(string n, string p, int y, int t, int c) {
    name = n;
    programName = p;
    year = y;
    ticket = t;
    chair = c;
}

string Student::getName() {
    return name;
}

string Student::getProgramName() {
    return programName;
}

int Student::getYear() {
    return year;
}

int Student::getTicket() {
    return ticket;
}

int Student::getChair() {
    return chair;
}
