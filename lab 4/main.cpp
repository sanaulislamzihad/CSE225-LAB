#include <iostream>
#include "unsortedtype.h"
#include "student.cpp"
using namespace std;

// Function to print integer list
void printIntList(UnsortedType<int>& list)
{
    int value;
    list.Reset();
    for (int i = 0; i < list.Length(); i++)
    {
        list.GetNext(value);
        cout << value;
        if (i < list.Length() - 1)
            cout << " ";
    }
    cout << endl;
}

// Function to print student list
void printStudentList(UnsortedType<Student>& list)
{
    Student value;
    list.Reset();
    for (int i = 0; i < list.Length(); i++)
    {
        list.GetNext(value);
        value.print();
        cout << endl;
    }
}

// Function to print search result
void printSearch(bool found)
{
    if (found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}

int main()
{
    cout << "=== INTEGER LIST OPERATIONS ===" << endl;
    
    // Create a list of integers
    UnsortedType<int> intList;
    
    // Insert four items: 5, 7, 6, 9
    cout << "Inserting four items: 5, 7, 6, 9" << endl;
    intList.Insert(5);
    intList.Insert(7);
    intList.Insert(6);
    intList.Insert(9);
    
    // Print the list
    cout << "Print the list: ";
    printIntList(intList);
    
    // Print the length of the list
    cout << "Print the length of the list: " << intList.Length() << endl;
    
    // Insert one item: 1
    cout << "Inserting one item: 1" << endl;
    intList.Insert(1);
    
    // Insert one more item: 12 (should give error)
    cout << "Inserting one more item: 12" << endl;
    intList.Insert(12);
    
    // Print the list
    cout << "Print the list: ";
    printIntList(intList);
    
    // Search operations
    bool found;
    
    cout << "Searching for 4: ";
    intList.Search(4, found);
    printSearch(found);
    
    cout << "Searching for 5: ";
    intList.Search(5, found);
    printSearch(found);
    
    cout << "Searching for 9: ";
    intList.Search(9, found);
    printSearch(found);
    
    cout << "Searching for 10: ";
    intList.Search(10, found);
    printSearch(found);
    
    // Check if list is full
    cout << "Is list full? ";
    if (intList.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
    
    // Delete 5
    cout << "Deleting 5" << endl;
    intList.Delete(5);
    
    // Check if list is full after deletion
    cout << "Is list full after deletion? ";
    if (intList.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
    
    // Print the list
    cout << "Print the list: ";
    printIntList(intList);
    
    // Delete 1
    cout << "Deleting 1" << endl;
    intList.Delete(1);
    
    // Print the list
    cout << "Print the list: ";
    printIntList(intList);
    
    // Delete 6
    cout << "Deleting 6" << endl;
    intList.Delete(6);
    
    // Print the list
    cout << "Print the list: ";
    printIntList(intList);
    
    // Delete 16 (should give error)
    cout << "Deleting 16" << endl;
    intList.Delete(16);
    
    cout << "\n=== STUDENT LIST OPERATIONS ===" << endl;
    
    // Create a list of Student objects
    UnsortedType<Student> studentList;
    
    // Insert 5 student records
    cout << "Inserting 5 student records:" << endl;
    Student s1(15234, "Jon", 2.6);
    Student s2(13732, "Tyrion", 3.9);
    Student s3(13569, "Sandor", 1.2);
    Student s4(15467, "Ramsey", 3.8);
    Student s5(16285, "Arya", 3.1);
    
    studentList.Insert(s1);
    studentList.Insert(s2);
    studentList.Insert(s3);
    studentList.Insert(s4);
    studentList.Insert(s5);
    
    // Delete the record with ID 15467
    cout << "Deleting student with ID 15467" << endl;
    Student st;
    for (int i = 0; i < studentList.Length(); i++)
    {
        studentList.GetNext(st);
        if (st.getID() == 15467)
        {
            studentList.Delete(st);
        }
    }
    studentList.Reset();
    
    // Print the list
    cout << "Print the list:" << endl;
    for (int i = 0; i < studentList.Length(); i++)
    {
        studentList.GetNext(st);
        st.print();
    }
    
    