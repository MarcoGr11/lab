#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
protected:
    std::string name_;
    int age_;

public:
    void setName(const std::string& name) {
        this->name_ = name;
    };
   
    Person();

    // Параметризований конструктор
    Person( std::string& name, int age) : name_(name), age_(age) {}
    Person(const std::string& name, int age):name_(name),age_(age){}

    ~Person() {}

    // Віртуальний метод для виведення інформації, щоб похідні класи могли його перевизначити
    virtual void display() const {
        std::cout << "Name: " << name_ << ", Age: " << age_ << std::endl;
    }

    // Геттери та сеттери
    std::string getName() const { return name_; }
    void setName( std::string &name) { name_ = name; }

    int getAge() const { return age_; }
    void setAge(int age) { age_ = age; }
};

#endif // PERSON_H
