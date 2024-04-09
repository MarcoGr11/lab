#include <iostream>
#include "Student.h"
#include "StudentGroup.h"
#include "Course.h"
#include "Teacher.h"  // Додавання, якщо ви використовуєте клас Teacher
#include "ExchangeStudent.h"  // Для демонстрації наслідування

using namespace std;

int main() {
    // Створення екземпляру студента
    Student student1("John Doe", 20, "S12345");
    Student student2("Jane Doe", 19, "S12346");

    // Створення екземпляру групи студентів
    StudentGroup group1("Group A");
    group1.addStudent(student1);
    group1.addStudent(student2);

    // Створення екземпляру курсу
    Course course1("Introduction to Programming", "CS101", 4);

    // Демонстрація використання методів
    cout << "Student: " << student1.getName() << ", ID: " << student1.getId() << endl;
    cout << "Group: " << group1.getGroupName() << endl;
    cout << "Course: " << course1.getCourseName() << ", Credits: " << course1.getCredits() << endl;

    // Створення та використання екземпляру вчителя
    Teacher teacher1("Alice Smith", 35, "Computer Science");
    cout << "Teacher: " << teacher1.getName() << ", Specialization: " << teacher1.getSpecialization() << endl;

    // студента-обмінник 
    ExchangeStudent exchangeStudent1("Carlos Hernandez", 21, "S654321", "Spain");
    cout << "Exchange Student: " << exchangeStudent1.getName() << ", ID: " << exchangeStudent1.getId() << ", Country: " << exchangeStudent1.getHomeCountry() << endl;
    return 0;
}





