#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

using namespace std;


class Student : public Person {
private:
    string id_; 

public:
    // конструктор за замовч
    Student() : Person(), id_("") {}
   
    string getRole() const override {
    return "Student";
}

    // конструктор з параметрами для ініціалізації імені, віку та ідентифік
    Student(string name, int age, string id) 
        : Person(name, age), id_(id) {}

    // конструктор копіювання
    Student(const Student& other);

    // деструктор (Virtual destructor)
    virtual ~Student(){}

    // гетер та сетер для ідентифік (Static Method Binding)
    string getId() const { return id_; }
    void setId( string& id) { id_ = id; }

    // перевизнач методу display з базового класу персон для виведення ідентифік ( Run-time (Override) )
    virtual void display() const override {
    Person::display();
    cout << "ID: " << id_ <<endl;
   }

    // опер присв копіюв
    Student& operator=(const Student& other);

    // опер присв переміщ !!!!!!!!!!!!!!!!!
    Student& operator=(Student&& other) noexcept;
};
   
#endif 
