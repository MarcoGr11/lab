#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course {
private:
    string courseName;  // Назва курсу
    string courseCode;  // Код курсу
    int credits;             // Кредити

public:
    // Конструктор за замовчуванням з ініціалізацією кредитів до значення за замовчуванням
    Course(const string& courseName = "", const string& courseCode = "", int credits = 0)
        : courseName(courseName), courseCode(courseCode), credits(credits) {}

    // Деструктор
    virtual ~Course() {}

    // Методи для доступу та зміни інформації про курс
    void setCourseName(const string& name) { courseName = name; }
    string getCourseName() const { return courseName; }

    void setCourseCode(const string& code) { courseCode = code; }
    string getCourseCode() const { return courseCode; }

    void setCredits(int cr) { credits = cr; }
    int getCredits() const { return credits; }

    // Метод для виведення інформації про курс
    void display() const {
        cout << "Course Name: " << courseName 
                  << ", Code: " << courseCode 
                  << ", Credits: " << credits << endl;
    }
};

#endif 
