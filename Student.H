#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

// Represents one student registered for the school event.
class Student {
private:
    string name;
    string password;
    string programName;
    int year;     // 1 or 2
    int ticket;   // 1 = basic (free, includes a drink), 2 = meal ($10, includes a meal and a coke)
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
