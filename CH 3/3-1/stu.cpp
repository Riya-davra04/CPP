#include<iostream>

using namespace std;

class Student
{

private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:

    void setStudentID(int stu_id)
    {
        this->stu_id = stu_id;
    }

    int getStudentID()
    {
        return stu_id;
    }
    
    void setStudentName(string stu_name)
    {
        this->stu_name = stu_name;
    }

    string getStudentName()
    {
        return stu_name;
    }

    void setStudentAge(int stu_age)
    {
        this->stu_age = stu_age;
    }

    int getStudentAge()
    {
        return stu_age;
    }

    void setStudentCourse(string stu_course)
    {
        this->stu_course = stu_course;
    }

    string getStudentCourse()
    {
        return stu_course;
    }

    void setStudentCity(string stu_city)
    {
        this->stu_city = stu_city;
    }

    string getStudentCity()
    {
        return stu_city;
    }

    void setStudentEmail(string stu_email)
    {
        this->stu_email = stu_email;
    }

    string getStudentEmail()
    {
        return stu_email;
    }

    void setStudentCollege(string stu_college)
    {
        this->stu_college = stu_college;
    }

    string getStudentCollege()
    {
        return stu_college;
    }

    void StudentDetails()
    {
        cout << "ID : ";
        cin >> stu_id;
        cout << "Name : ";
        cin >> stu_name;
        cout << "Age : ";
        cin >> stu_age;
        cout << "Course : ";
        cin >> stu_course;
        cout << "City : ";
        cin >> stu_city;
        cout << "Email : ";
        cin >> stu_email;
        cout << "College : ";
        cin >> stu_college;
    }

    void displayStudentDetails()
    {
        cout << "Student ID : " << getStudentID() << endl;
        cout << "Student Name : " << getStudentName() << endl;
        cout << "Student Age : " << getStudentAge() << endl;
        cout << "Student Course : " << getStudentCourse() << endl;
        cout << "Student City : " << getStudentCity() << endl;
        cout << "Student Email : " << getStudentEmail() << endl;
        cout << "Student College : " << getStudentCollege() << endl;
    }

};