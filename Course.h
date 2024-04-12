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

    // сеттер для назви курсу
    void setCourseName(const string& name);
    // геттер для назви курсу
    string getCourseName() const;

    // сеттер  коду курс
    void setCourseCode(const string& code);
    // геттер  коду курс
    string getCourseCode() const;

    // сеттер для кіл-ті кредит курс
    void setCredits(int cr);
    // геттер для кіл-ті кредит курс
    int getCredits() const;

    // метод для відображ інфо про курс !!!!!!!!!!!!!!
    void display() const;
};

#endif 
