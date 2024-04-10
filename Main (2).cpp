#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "ExchangeStudent.h"
#include "Course.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //  викладач
    Teacher teacher1("Alice Johnson", 31, "Object-Oriented Programming ");
    // викладач
    Teacher teacher2("Bob Smith", 55, "English");

    //  студент
    Student student1("John Warzone", 20, "S001");
    Student student2("Jane Flex", 22, "S002");
    // студент
    Student student3("Mark Spark", 21, "S003");

    //  обміннй студент
    ExchangeStudent exchangeStudent1("Kaushik Twar", 23, "S004", "India");
    // обмінний студент
    ExchangeStudent exchangeStudent2("Abebe Akobebe", 24, "S005", "Africa");

    //  курси
    Course course1("Object-Oriented Programming", "OOP101", 3);
    // ще один курс
    Course course2("English", "ENGL301", 5);

    // Виведення інформації
    cout << "Teachers:" << endl;
    teacher1.display();
    teacher2.display();

    cout << "\nStudents:" << endl;
    student1.display();
    student2.display();
    student3.display();

    cout << "\nExchange Students:" << endl;
    exchangeStudent1.display();
    exchangeStudent2.display();

    cout << "\nCourses:" << endl;
    course1.display();
    course2.display();

    return 0;
}
