#include <iostream> 
#include "Student.h" 
#include "StudentGroup.h" 
#include "Course.h" 
using namespace std; 

int main() {
    // створення екземпляру студ 1
    Student student1("John Doe", 20, "S12345");
    // другий екземпляр 
    Student student2("Jane Doe", 19, "S12346");

    // створ екземпляру студентгрупи A
    StudentGroup group1("Group A");
    // додаван студ1 до групи група1
    group1.addStudent(student1);
    // додаван студ2 до групи група1
    group1.addStudent(student2);

    // створ екземпляру курсу  
    Course course1("Introduction to Programming", "CS101", 4);

    // вивед деталей про студ1 за допомогою методів getName() та getId()
    cout << "Student: " << student1.getName() << ", ID: " << student1.getId() << endl;
    // вивед деталей про студ1 за допомогою методу getGroupName()
    cout << "Group: " << group1.getGroupName() << endl;
    // виведення деталей про курс1 використ методи getCourseName() та getCredits()
    cout << "Course: " << course1.getCourseName() << ", Credits: " << course1.getCredits() << endl;

    return 0; // кінець...
}




