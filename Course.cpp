#include "Course.h"
#include <iostream>

using namespace std;

Course::Course() : courseName("Unknown"), courseCode("000"), credits(3) {}

Course::Course(const string& name, const string& code, int cr)
    : courseName(name), courseCode(code), credits(cr) {}

Course::~Course() {}

void Course::setCourseName(const string& name) {
    courseName = name;
}

string Course::getCourseName() const {
    return courseName;
}

void Course::setCourseCode(const string& code) {
    courseCode = code;
}

string Course::getCourseCode() const {
    return courseCode;
}

void Course::setCredits(int cr) {
    credits = cr;
}

int Course::getCredits() const {
    return credits;
}

void Course::display() const {
    cout << "Course Name: " << courseName 
              << ", Code: " << courseCode 
              << ", Credits: " << credits <<endl;
}
