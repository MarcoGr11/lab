#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <memory>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "ExchangeStudent.h"

using namespace std;

vector<shared_ptr<string>> students;
vector<shared_ptr<string>> teachers;
vector<shared_ptr<string>> courses;
vector<shared_ptr<string>> suggestions;


bool authenticateAdmin();
void saveToFile(const string& data, const string& filename);
bool isUserRegistered(const string& username);
void registerUser();
bool loginUser();
void adminMenu();
void userMenu();
void userActions();
void saveSuggestion(const string& suggestion);
void displayData(const vector<shared_ptr<string>>& data);
void addStudent(const string& name, const string& surname, int age, const string& group);
void addTeacher(const string& name, const string& surname, int age, const string& subject);
void addCourse(const string& courseName, int creditHours);

bool authenticateAdmin() {
    string password;
    cout << "Please enter admin password: ";
    cin >> password;
    return password == "admin123";
}

void saveToFile(const string& data, const string& filename) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << data << endl;
        file.close();
    } else {
        cout << "Unable to open file\n";
    }
}

bool isUserRegistered(const string& username) {
    string line, registeredUser;
    ifstream file("users.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            stringstream ss(line);
            ss >> registeredUser;
            if (username == registeredUser) {
                file.close();
                return true;
            }
        }
        file.close();
    }
    return false;
}

void registerUser() {
    string username, password;
    cout << "Enter a username to register: ";
    cin >> username;

    if (isUserRegistered(username)) {
        cout << "This username is already registered. Try logging in." << endl;
        return;
    }

    cout << "Enter a password for registration: ";
    cin >> password;
    saveToFile(username + " " + password, "users.txt");
    cout << "Registration successful. You can now log in." << endl;
}

bool loginUser() {
    string username, password, fileUsername, filePassword;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    ifstream file("users.txt");
    if (file.is_open()) {
        while (file >> fileUsername >> filePassword) {
            if (fileUsername == username && filePassword == password) {
                return true;
            }
        }
        file.close();
    }
    return false;
}

void userMenu() {
    cout << "Please log in or register to continue.\n";
    cout << "1. Log in\n";
    cout << "2. Register\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            if (loginUser()) {
                userActions();
            } else {
                cout << "Invalid username or password. Please try again or register." << endl;
            }
            break;
        case 2:
            registerUser();
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
}

void adminMenu() {
    int choice;
    do {
        cout << "Admin Menu\n";
        cout << "1. Add Student\n";
        cout << "2. Add Teacher\n";
        cout << "3. Add Course\n";
        cout << "4. View Suggestions\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string name, surname, group;
                int age;
                cout << "Enter student's first name: ";
                cin >> name;
                cout << "Enter student's surname: ";
                cin >> surname;
                cout << "Enter student's age: ";
                cin >> age;
                cout << "Enter student's group: ";
                cin >> group;
                addStudent(name, surname, age, group);
                break;
            }
            case 2: {
                string name, surname, subject;
                int age;
                cout << "Enter teacher's first name: ";
                cin >> name;
                cout << "Enter teacher's surname: ";
                cin >> surname;
                cout << "Enter teacher's age: ";
                cin >> age;
                cout << "Enter teacher's subject: ";
                cin >> subject;
                addTeacher(name, surname, age, subject);
                break;
            }
            case 3: {
                string courseName;
                int creditHours;
                cout << "Enter course name: ";
                cin >> courseName;
                cout << "Enter credit hours: ";
                cin >> creditHours;
                addCourse(courseName, creditHours);
                break;
            }
            case 4:
                cout << "Viewing Suggestions:\n";
                displayData(suggestions);
                break;
            case 5:
                cout << "Exiting admin menu.\n";
                return;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 5);
}

void displayData(const vector<shared_ptr<string>>& data) {
    for (const auto& entry : data) {
        cout << *entry << endl;
    }
}

void addStudent(const string& name, const string& surname, int age, const string& group) {
    auto studentInfo = make_shared<string>("Student: " + name + " " + surname + ", " + to_string(age) + ", " + group);
    students.push_back(studentInfo);
    saveToFile(*studentInfo, "students.txt");
}

void addTeacher(const string& name, const string& surname, int age, const string& subject) {
    auto teacherInfo = make_shared<string>("Teacher: " + name + " " + surname + ", " + to_string(age) + ", " + subject);
    teachers.push_back(teacherInfo);
    saveToFile(*teacherInfo, "teachers.txt");
}

void addCourse(const string& courseName, int creditHours) {
    auto courseInfo = make_shared<string>("Course: " + courseName + ", " + to_string(creditHours));
    courses.push_back(courseInfo);
    saveToFile(*courseInfo, "courses.txt");
}

void saveSuggestion(const string& suggestion) {
    ofstream file("suggestions.txt", ios::app);
    if (file.is_open()) {
        file << suggestion << endl;
        file.close();
        cout << "Thank you! Your suggestion has been saved." << endl;
    } else {
        cout << "Unable to open the suggestions file." << endl;
    }
}

void userActions() {
    int choice;
    do {
        cout << "User Actions\n";
        cout << "1. View Students\n";
        cout << "2. View Teachers\n";
        cout << "3. View Courses\n";
        cout << "4. Leave a Suggestion\n";
        cout << "5. Log out\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Students:\n";
                displayData(students);
                break;
            case 2:
                cout << "Teachers:\n";
                displayData(teachers);
                break;
            case 3:
                cout << "Courses:\n";
                displayData(courses);
                break;
            case 4: {
                cin.ignore();  
                string suggestion;
                cout << "Please type your suggestion and press enter: ";
                getline(cin, suggestion);
                saveSuggestion(suggestion);
                break;
            }
            case 5:
                cout << "Exiting user menu.\n";
                return;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);
}

int main() {
    cout << "Select login type:\n";
    cout << "1. Admin Login\n";
    cout << "2. User Login\n";
    cout << "Enter choice: ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            if (authenticateAdmin()) {
                adminMenu();
            } else {
                cout << "Invalid admin password." << endl;
            }
            break;
        case 2:
            userMenu();
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
    return 0;
}

