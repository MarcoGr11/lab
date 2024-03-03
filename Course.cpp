#include "Course.h" 

// конструктор який ініціалізує члени класу зі значеннями 
Course::Course() : courseName("Unknown"), courseCode("000"), credits(3) {}

// перевантажений конструктор з конкретними значеннями
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
