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
    friend bool operator==(Student&, Student&);
    friend bool operator!=(Student&, Student&);
};

#endif // STUDENT_H 