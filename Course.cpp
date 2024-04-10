#include "Course.h"
#include <iostream>

using namespace std;

// Конструктор за замовчуванням, ініціалізує курс з базовими значеннями
Course::Course() : courseName("Unknown"), courseCode("000"), credits(3) {}

// Конструктор з параметрами для ініціалізації курсу з назвою, кодом та кількістю кредитів
Course::Course(const string& name, const string& code, int cr)
    : courseName(name), courseCode(code), credits(cr) {}

// Деструктор
Course::~Course() {}

// Встановлює назву курсу
void Course::setCourseName(const string& name) {
    courseName = name;
}

// Повертає назву курсу
string Course::getCourseName() const {
    return courseName;
}

// Встановлює код курсу
void Course::setCourseCode(const string& code) {
    courseCode = code;
}

// Повертає код курсу
string Course::getCourseCode() const {
    return courseCode;
}

// Встановлює кількість кредитів курсу
void Course::setCredits(int cr) {
    credits = cr;
}

// Повертає кількість кредитів курсу
int Course::getCredits() const {
    return credits;
}

// Відображає інформацію про курс
void Course::display() const {
    cout << "Course Name: " << courseName 
         << ", Code: " << courseCode 
         << ", Credits: " << credits << endl;
}
