
#include <string>
#include <iostream>

using namespace std;

class Person {
public:
    int age ;
    Person(const string& name, int age);
    virtual ~Person();

    virtual void display() const;
    
    friend ostream &operator<<(ostream &os, const Person &person);
    friend istream &operator>>(istream &is, Person &person);

// Усередині класу Person
public:
    void setAge(int age) { this->age = age; }
    int getAge() const { return age; }

private:
    string name_;
    int age_;
};
