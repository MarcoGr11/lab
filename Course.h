#ifndef Course_h
#define Course_h

#include <string>

class Course {
private:
    std::string courseName;
    std::string courseCode;
    int credits;

public:
    Course();
    Course(const std::string& courseName, const std::string& courseCode, int credits);
    virtual ~Course();

    void setCourseName(const std::string& name);
    std::string getCourseName() const;

    void setCourseCode(const std::string& code);
    std::string getCourseCode() const;

    void setCredits(int cr);
    int getCredits() const;

    void display() const;
};

#endif // COURSE_H
