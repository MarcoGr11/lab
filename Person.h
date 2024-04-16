#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;


class Person {
protected:
    string name_; 
    int age_; 

public:
    // конструктор за замовч
    Person();

    // конструктор з параметрами для ім'я та віку
    Person(string &name, int age) : name_(name), age_(age) {}
    // конструктор з параметрами для ім'я та віку, ім'я передається як константа
    Person(const string& name, int age): name_(name), age_(age){}

    // віртуал деструктор
    virtual ~Person() {}

    // віртуальний метод вивед інфо про особу
    virtual void display() const {
    cout << "Name: " << name_ << ", Age: " << age_ << endl;
    }

    // гетер для ім'я
    string getName() const { return name_; }
    // сетер для ім'я
    void setName(string &name) { name_ = name; }

    // гетер для віку
    int getAge() const { return age_; }
    // сетер для віку
    void setAge(int age) { age_ = age; }
};

#endif 
