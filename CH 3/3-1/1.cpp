#include<iostream>
#include "stu.cpp"

using namespace std;

int main()
{

    Student s1 , s2 , s3 , s4 , s5;
    int stu_id,stu_age;
    string stu_name , stu_college , stu_course , stu_email , stu_city ;

    cout << " ---- Enter 1st Student Details : ---- " << endl ; 
    s1.StudentDetails();
    s1.setStudentID(stu_id);
    s1.setStudentName(stu_name);
    s1.setStudentAge(stu_age);
    s1.setStudentCourse(stu_course);
    s1.setStudentCollege(stu_college);
    s1.setStudentEmail(stu_email);
    s1.setStudentCity(stu_city);

    cout << " ---- Enter 2nd Student Details : ---- " << endl ; 
    s2.StudentDetails();
    s2.setStudentID(stu_id);
    s2.setStudentName(stu_name);
    s2.setStudentAge(stu_age);
    s2.setStudentCourse(stu_course);
    s2.setStudentCollege(stu_college);
    s2.setStudentEmail(stu_email);
    s2.setStudentCity(stu_city);

    cout << " ---- Enter 3rd Student Details : ---- " << endl ; 
    s3.StudentDetails();
    s3.setStudentID(stu_id);
    s3.setStudentName(stu_name);
    s3.setStudentAge(stu_age);
    s3.setStudentCourse(stu_course);
    s3.setStudentCollege(stu_college);
    s3.setStudentEmail(stu_email);
    s3.setStudentCity(stu_city);

    cout << " ---- Enter 4th Student Details : ---- " << endl ; 
    s4.StudentDetails();
    s4.setStudentID(stu_id);
    s4.setStudentName(stu_name);
    s4.setStudentAge(stu_age);
    s4.setStudentCourse(stu_course);
    s4.setStudentCollege(stu_college);
    s4.setStudentEmail(stu_email);
    s4.setStudentCity(stu_city);

    cout << " ---- Enter 5th Student Details : ---- " << endl ; 
    s5.StudentDetails();
    s5.setStudentID(stu_id);
    s5.setStudentName(stu_name);
    s5.setStudentAge(stu_age);
    s5.setStudentCourse(stu_course);
    s5.setStudentCollege(stu_college);
    s5.setStudentEmail(stu_email);
    s5.setStudentCity(stu_city);

    cout << "---1st Student : --- " << endl;
    s1.displayStudentDetails();

    cout << "---2nd Student : --- " << endl;
    s2.displayStudentDetails();

    cout << "---3rd Student : --- " << endl;
    s3.displayStudentDetails();

    cout << "---4th Student : --- " << endl;
    s4.displayStudentDetails();

    cout << "---5th Student : --- " << endl;
    s5.displayStudentDetails();

    return 0;   
}