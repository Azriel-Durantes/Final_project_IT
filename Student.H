#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
private:
    string name;
    string programName;
    int year;
    int ticket;
    int chair;

public:
    Student(string n, string p, int y, int t, int c);
    string getName();
    string getProgramName();
    int getYear();
    int getTicket();
    int getChair();
};

#endif
