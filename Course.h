#ifndef Course_h
#define Course_h

#include <string>

using namespace std;

class Course {
private:
    string courseName;
    string courseCode;
    int credits;

public:
    Course();
    Course(const string& courseName, const string& courseCode, int credits);
    virtual ~Course();

    void setCourseName(const string& name);
    string getCourseName() const;

    void setCourseCode(const string& code);
    string getCourseCode() const;

    void setCredits(int cr);
    int getCredits() const;

    void display() const;
};

#endif // COURSE_H
