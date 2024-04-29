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
    
    cout << " ---- Enter 2nd Student Details : ---- " << endl ; 
    s2.StudentDetails();
   

    cout << " ---- Enter 3rd Student Details : ---- " << endl ; 
    s3.StudentDetails();
    

    cout << " ---- Enter 4th Student Details : ---- " << endl ; 
    s4.StudentDetails();
   

    cout << " ---- Enter 5th Student Details : ---- " << endl ; 
    s5.StudentDetails();
    
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