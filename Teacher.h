#ifndef TEACHER_H 
#define TEACHER_H

#include "IDisplayable.h"
#include "Person.h" 
#include <string> 
#include <iostream>

using namespace std;

class Teacher final : public Person {
public:
    // конструктор
    Teacher(string name, int age, string subject);
    virtual ~Teacher(); // деструктор (Virtual destructor)
    
    string getRole() const override {
    return "Teacher";
}

    // перевизначена віртуал функ відображ з персон ( Run-time (Override))
    virtual void display() const override;

private:
    string subject_; 
};

#endif 
