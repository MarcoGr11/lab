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
    Teacher teacher1("Alice Johnson", 45, "History");
    // викладач
    Teacher teacher2("Bob Smith", 55, "Mathematics");

    //  студент
    Student student1("John Doe", 20, "S001");
    Student student2("Jane Smith", 22, "S002");
    // студент
    Student student3("Mark Spencer", 21, "S003");

    //  обміннй студент
    ExchangeStudent exchangeStudent1("Carlos Espinoza", 23, "S004", "Spain");
    // обмінний студент
    ExchangeStudent exchangeStudent2("Marie Curie", 24, "S005", "France");

    //  курси
    Course course1("World History", "HIST101", 3);
    // ще один курс
    Course course2("Advanced Mathematics", "MATH301", 5);

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
