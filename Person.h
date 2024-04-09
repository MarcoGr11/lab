#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person {
protected:
    string name_;  // Змінні визначено як protected для доступу в похідних класах
    int age_;

public:
    Person(const string& name, int age) : name_(name), age_(age) {}
    virtual ~Person() {}

    virtual void display() const {
        cout << "Name: " << name_ << ", Age: " << age_ << endl;
    }
    
    // Додаємо оператори виводу та вводу
    friend ostream &operator<<(ostream &os, const Person &person);
    friend istream &operator>>(istream &is, Person &person);
};
