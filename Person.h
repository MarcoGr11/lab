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
    // Параметризований конструктор
    Person(const string& name, int age) : name_(name), age_(age) {}

    // Віртуальний деструктор для коректного очищення у випадку наслідування
    virtual ~Person() {}

    // Віртуальний метод для виведення інформації, щоб похідні класи могли його перевизначити
    virtual void display() const {
        cout << "Name: " << name_ << ", Age: " << age_ << endl;
    }

    // Геттери та сеттери
    string getName() const { return name_; }
    void setName(const string & name) { name_ = name; }

    int getAge() const { return age_; }
    void setAge(int age) { age_ = age; }
};

#endif // PERSON_H
