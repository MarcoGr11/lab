#pragma once
#include "Student.h"
#include <string>

using namespace std;

class ExchangeStudent : public Student {
public:
    ExchangeStudent(const string& name, int age, const string& university, const string& homeCountry);

    void display() const override;

private:
    string homeCountry_;
};
