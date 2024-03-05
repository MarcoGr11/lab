#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course {
private:
    string courseName; // назва курсу
    string courseCode; // код курсу
    int credits; // кредити

public:
    Course(); // конструктор 
    Course(string courseName, string courseCode, int credits = 3); // перевантажений конструктор
    ~Course(); // деструктор
   
    // mетоди для встанов та отримання значень полів
    void setCourseName(string courseName);
    string getCourseName() const;

    void setCourseCode(string courseCode);
    string getCourseCode() const;

    void setCredits(int credits);
    int getCredits() const;
};

#endif
