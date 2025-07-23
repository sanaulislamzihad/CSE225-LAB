#include "student.h"

Student::Student()
{
    studentID = 0;
    name = "";
    cgpa = 0.0;
}

Student::Student(int id, string n, double gpa)
{
    studentID = id;
    name = n;
    cgpa = gpa;
}

void Student::print() const
{
    cout << studentID << ", " << name << ", " << cgpa << endl;
}

int Student::getID() const
{
    return studentID;
}

string Student::getName() const
{
    return name;
}

double Student::getCGPA() const
{
    return cgpa;
}

bool operator==(Student &obj1, Student &obj2)
{
    if (obj1.getID() == obj2.getID())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator!=(Student &obj1, Student &obj2)
{
    if (obj1.getID() != obj2.getID())
    {
        return true;
    }
    else
    {
        return false;
    }
}
