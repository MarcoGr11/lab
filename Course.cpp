#include "Course.h"
#include <iostream>

Course::Course() : courseName("Unknown"), courseCode("000"), credits(3) {}

Course::Course(const std::string& name, const std::string& code, int cr)
    : courseName(name), courseCode(code), credits(cr) {}

Course::~Course() {}

void Course::setCourseName(const std::string& name) {
    courseName = name;
}

std::string Course::getCourseName() const {
    return courseName;
}

void Course::setCourseCode(const std::string& code) {
    courseCode = code;
}

std::string Course::getCourseCode() const {
    return courseCode;
}

void Course::setCredits(int cr) {
    credits = cr;
}

int Course::getCredits() const {
    return credits;
}

void Course::display() const {
    std::cout << "Course Name: " << courseName 
              << ", Code: " << courseCode 
              << ", Credits: " << credits << std::endl;
}
