#include "ExchangeStudent.h"

using namespace std;

ExchangeStudent::ExchangeStudent(const string& name, int age, const string& university, const string& homeCountry) 
    : Student(name, age, university), homeCountry_(homeCountry) {}

void ExchangeStudent::display() const {
    Student::display();
    cout << "Home Country: " << homeCountry_ << endl;
}
