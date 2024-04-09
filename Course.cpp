#include "Course.h" 

// Метод для виведення інформації про курс
void Course::display() const {
    cout << "Course Name: " << courseName 
              << ", Code: " << courseCode 
              << ", Credits: " << credits << endl;

// конструктор делагування
Course::Course() : Course("Unknown","000",3) {}

// перевантажений конструктор 
Course::Course(string courseName, string courseCode, int credits) : courseName(courseName), courseCode(courseCode), credits(credits) {}

// деструктор
Course::~Course() {}

// метод для встанв назви курсу
void Course::setCourseName(string courseName) {
    this->courseName = courseName; // викор this для доступу до змінної екземпляра класу
}

// метод для отримання назви курсу
string Course::getCourseName() const {
    return courseName; // повертає назву курсу
}

// метод для встановлення коду курсу
void Course::setCourseCode(string courseCode) {
    this->courseCode = courseCode; // викор this для доступу до змінної екземпляра класу
}

// метод для отримання коду курсу
string Course::getCourseCode() const {
    return courseCode; // повертає код курсу
}

// метод для встановлення кількості кредитів
void Course::setCredits(int credits) {
    this->credits = credits; // використ this для доступу  змінної екземпляра класу
}

// метод для отримання кількості кредитів
int Course::getCredits() const {
    return credits; // повертає кількість кредитів
}
