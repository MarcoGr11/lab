#ifndef COURSE_H
#define COURSE_H

#include <string>

using namespace std;

// Клас Course, що представляє навчальний курс
class Course {
private:
    string courseName; // Назва курсу
    string courseCode; // Код курсу
    int credits; // Кількість кредитів курсу

public:
    // Конструктор за замовчуванням
    Course();
    // Конструктор з параметрами для ініціалізації назви, коду та кількості кредитів
    Course(const string& courseName, const string& courseCode, int credits);
    // Віртуальний деструктор
    virtual ~Course();

    // Сеттер для назви курсу
    void setCourseName(const string& name);
    // Геттер для назви курсу
    string getCourseName() const;

    // Сеттер для коду курсу
    void setCourseCode(const string& code);
    // Геттер для коду курсу
    string getCourseCode() const;

    // Сеттер для кількості кредитів курсу
    void setCredits(int cr);
    // Геттер для кількості кредитів курсу
    int getCredits() const;

    // Метод для відображення інформації про курс
    void display() const;
};

#endif // COURSE_H
