#ifndef COURSE_H
#define COURSE_H

#include <string>

using namespace std;

class Course {
private:
    string courseName; 
    string courseCode; 
    int credits; 

public:
    // Конструктор за замовч
    Course();
    // конструктор з параметр для ініціаліз назви коду  кіл-ті кредит
    Course(const string& courseName, const string& courseCode, int credits);
    //деструктор
    ~Course();

    // сеттер та геттер для назви курсу
    void setCourseName(const string& name);
    string getCourseName() const;

    // сеттер та геттер коду курс
    void setCourseCode(const string& code);
    string getCourseCode() const;

    // сеттер та  геттер для кіл-ті кредит курс
    void setCredits(int cr);
    int getCredits() const;

    // метод для відображ інфо про курс 
    void display() const;
};

#endif 
