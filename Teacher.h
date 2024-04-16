#ifndef TEACHER_H 
#define TEACHER_H

#include "IDisplayable.h"
#include "Person.h" 
#include <string> 
#include <iostream>

using namespace std;


// викладач  є похідним класом від персон
class Teacher final : public Person {
public:
    // конструктор, який приймає ім'я, вік і предмет
    Teacher(string name, int age, string subject);
    virtual ~Teacher(); // деструктор

    // віртуальна функція відображення, перевизначена з персон
    virtual void display() const override;

private:
    string subject_; 
};

#endif 
