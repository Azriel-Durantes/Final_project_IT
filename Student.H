#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
private:
    string name;
    string password;
    string programName;
    int year;
    int ticket;
    int chair;

public:
    Student(string n, string pw, string p, int y, int t, int c);
    bool checkPassword(string attempt) const;
    string getName() const;
    string getProgramName() const;
    int getYear() const;
    int getTicket() const;
    int getChair() const;
    string getTicketName() const;
    int getPrice() const;
};

#endif