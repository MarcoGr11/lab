#ifndef TEACHER_H 
#define TEACHER_H

#include "Person.h" 
#include <string> 

using namespace std;


// викладач  є похідним класом від персон
class Teacher : public Person {
public:
    // конструктор, який приймає ім'я, вік і предмет
    Teacher(string name, int age, string subject);
    ~Teacher(); // деструктор

    // віртуальна функція відображення, перевизначена з Person
    void display() const override;

private:
    string subject_; // предмет, який викладає вчитель
};

#endif 
