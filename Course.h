#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
private:
    std::string courseName;  // Назва курсу
    std::string courseCode;  // Код курсу
    int credits;             // Кредити

public:
    // Конструктор за замовчуванням
    Course() : courseName("Unknown"), courseCode("000"), credits(0) {}

    // Параметризований конструктор
    Course(const std::string& courseName, const std::string& courseCode, int credits)
        : courseName(courseName), courseCode(courseCode), credits(credits) {}

    // Деструктор
    virtual ~Course() {}

    // Методи для доступу та зміни інформації про курс
    void setCourseName(const std::string& name) { courseName = name; }
    std::string getCourseName() const { return courseName; }

    void setCourseCode(const std::string& code) { courseCode = code; }
    std::string getCourseCode() const { return courseCode; }

    void setCredits(int cr) { credits = cr; }
    int getCredits() const { return credits; }

    // Метод для виведення інформації про курс
    void display() const;
};

#endif // COURSE_H
