#include "Course.h"
#include <iostream>

using namespace std;

// конструктор за замовч
Course::Course() : courseName("Unknown"), courseCode("000"), credits(3) {}

// конструктор з параметрами для ініціаліз
Course::Course(const string& name, const string& code, int cr)
    : courseName(name), courseCode(code), credits(cr) {}

// деструктор
Course::~Course() {}

// встановлює назву курсу
void Course::setCourseName(const string& name) {
    courseName = name;
}

// повертає назв курсу
string Course::getCourseName() const {
    return courseName;
}

// встановлює код курсу
void Course::setCourseCode(const string& code) {
    courseCode = code;
}

// повертає код курсу
string Course::getCourseCode() const {
    return courseCode;
}

// встановлює кіл-ть кредитів курсу
void Course::setCredits(int cr) {
    credits = cr;
}

// повертає кіл-ть кредитів курсу
int Course::getCredits() const {
    return credits;
}

// відображ інфо про курс !!!!!!!!!!!!!!!!
void Course::display() const {
    cout << "Course Name: " << courseName 
         << ", Code: " << courseCode 
         << ", Credits: " << credits << endl;
}
