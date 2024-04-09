    #include "Person.h"
class Person {
public:
    Person() : name_(""), age_(0) {} // Конструктор за замовчуванням
    Person(const string& name, int age) : name_(name), age_(age) {}
};

    // Реалізація операторів виводу та вводу
    ostream &operator<<(ostream &os, const Person &person) {
        os << "Name: " << person.name_ << ", Age: " << person.age_;
        return os;
    }

    istream &operator>>(istream &is, Person &person) {
        is >> person.name_ >> person.age_;
        return is;
    }
