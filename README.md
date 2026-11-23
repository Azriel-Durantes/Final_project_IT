# Final_project_IT
The final project for IT 1
# School Event Registration System

A menu-driven C++ console application that lets students at a Belizean junior college register for a school event, pick a ticket, choose a chair, and log in to view their registration. Built as a project for the Fundamentals of Programming course.

Context: a school event at Centro Escolar Mexico Junior College (CEMJC), Corozal, with 20 chairs, 7 programmes, and 2 ticket types. 
# Features

- Register a student with a name and password (names must be unique, capitals ignored)
- Choose one of 7 CEMJC programmes and Year 1 or Year 2
- Choose a ticket: Basic (free, includes a drink) or Meal ($10, includes a meal and a coke)
- Pick a chair from a grid that shows free chairs by number and taken chairs as `XX`
- Student login: name and password, then shows class, ticket, meal status, and chair
- View all registered students
- Event summary: students registered, basic and meal tickets, money collected, chairs left
- Input validation for numbers, blank text, spaces-only text, duplicate names, taken chairs, a full event, and closed input

# Files

| File | Purpose |
| --- | --- |
| `main.cpp` | Menu and application functions (input, search, chairs, register, login, summary) |
| `Student.h` | `Student` class declaration (private data, public methods) |
| `Student.cpp` | `Student` class method definitions |

# Prerequisites

- A C++ compiler that supports C++11 or newer (for example `g++` or `clang++`)
- Git (to clone the repository)
- Works with Visual Studio Code, Cxxdroid, or any terminal

##Build and run

1. Clone the repository and open the project folder.
2. Compile all source files together:


3. Run it:

Cxxdroid or another IDE: add `main.cpp`, Student.cpp, and `Student.h` to the same project and press Run.

# Example session

--- School Event Registration ---
1. Register student
2. Student login
3. View chairs
4. View registered students
5. Event summary
6. Exit
Enter choice: 1
Enter student name: Ana Cruz
Create a password: secret
Select student's class:
1. Information Technology
...
Enter class number: 1
Enter year (1 or 2): 2
Enter ticket number: 2
Select your chair:
[ 1] [ 2] [ 3] [ 4] [ 5]
...
Enter chair number: 7
Student registered. Your chair is number 7.

Enter choice: 2
Enter student name: ana cruz
Enter password: secret
Welcome, Ana Cruz!
Class: Information Technology, Year 2
Ticket: Meal ($10) - includes a meal and a coke
Meal: Yes - $10 meal and coke
Your chair: 7
```

# Limitations

- Data is kept in memory only and is lost when the program closes. File saving was not used because the mobile compilers available for development did not reliably keep files between runs.
- Passwords are stored as plain text in memory. This is a classroom project and is not secure.
- There is no option to edit or cancel a registration, and capacity is fixed at 20 chairs.

# Testing

A 20-case test plan (normal, boundary, invalid, integration, and regression cases) is in the project report, with results and a defect log.

# Credits and AI use

- Programme names are from the CEMJC website: https://cemjc.edu.bz
- AI assistance (Claude by Anthropic) was used for planning, minor code generation, and documentation skeletons. 

- # AI was not used to generate all code and only used to fix errors when a solution was taking more time than was available.

- # AI was not used to write the complete document only provide a skeleton of what should be written and where
