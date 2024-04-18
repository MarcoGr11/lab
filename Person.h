#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "IDisplayable.h"

using namespace std;


class Person {
protected:
    string name_; 
    int age_; 

public:
    // конструктор за замовч
    Person();
    virtual string getRole() const = 0;  // чисто віртуальна функція

    // конструктор з параметрами для ім'я та віку
    Person(string &name, int age) : name_(name), age_(age) {}
    // конструктор з параметрами для ім'я та віку, ім'я передається як константа
    Person(const string& name, int age): name_(name), age_(age){}

    // віртуал деструктор (Virtual destructor)
    virtual ~Person() {}

    // віртуальний метод вивед інфо про особу ( run time (Override) )
    virtual void display() const {
    cout << "Name: " << name_ << ", Age: " << age_ << endl;
    }

    // гетер та сетер  для ім'я (Static Method Binding)
    string getName() const { return name_; }
    void setName(string &name) { name_ = name; }

    // гетер та сетер  для віку (Static Method Binding)
    int getAge() const { return age_; }
    void setAge(int age) { age_ = age; }
};

#endif 
