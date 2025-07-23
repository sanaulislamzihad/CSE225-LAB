#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int studentID;
    string name;
    double cgpa;
public:
    Student();
    Student(int id, string n, double gpa);
    void print() const;
    int getID() const;
    string getName() const;
    double getCGPA() const;
    
    // Friend operator overloading
    friend bool operator==(Student &obj1, Student &obj2);
    friend bool operator!=(Student &obj1, Student &obj2 );
};

#endif // STUDENT_H 