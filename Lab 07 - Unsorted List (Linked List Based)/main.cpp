#include <iostream>
#include "unsortedtype.cpp"

using namespace std;

void printIntList(UnsortedType<int>& list)
{
    int value;
    list.Reset();
    for (int i = 0; i < list.Length(); i++)
    {
        list.GetNext(value);
        cout << value <<" ";
        
    }
    cout << endl;
}
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
    
    
    // Delete 5
    cout << "Deleting 5" << endl;
    intList.Delete(5);
    
    
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
    
    cout << "\n=== ADDITIONAL LIST OPERATIONS FROM IMAGES ===" << endl;
    
    // Code from the images
    UnsortedType<int> firstList;
    UnsortedType<int> secondList;
    
    firstList.Insert(10);
    firstList.Insert(1);
    firstList.Insert(5);
    firstList.Insert(6);
    firstList.Insert(10);
    firstList.Insert(14);
    firstList.Insert(20);
    firstList.Insert(25);
    firstList.Insert(31);
    firstList.Insert(38);
    firstList.Insert(40);

    secondList.Insert(12);
    secondList.Insert(2);
    secondList.Insert(4);
    secondList.Insert(7);
    secondList.Insert(9);
    secondList.Insert(16);
    secondList.Insert(19);
    secondList.Insert(23);
    secondList.Insert(24);
    secondList.Insert(32);
    secondList.Insert(35);
    secondList.Insert(36);
    secondList.Insert(42);
    
    int num;
    int length = secondList.Length();
    for (int i = 0; i < length; i++)
    {
        secondList.GetNext(num);
        firstList.Insert(num);
        secondList.Delete(num);
    }
    firstList.Reset();
    for(int i = 0; i < firstList.Length(); i++)
    {
        firstList.GetNext(num);
        cout <<  num << " ";
    }
    cout << endl;
    
    int max;
   
    
    while (firstList.Length() != 0)
    {
        firstList.Reset();
        firstList.GetNext(num);
        max = num;
        for (int i = 0; i < firstList.Length(); )
        {
            firstList.GetNext(num);
            if (num > max)
                max = num;
        }
        firstList.Delete(max);
        secondList.Search(max, found);
        if (!found)
            secondList.Insert(max);
    }
    for (int i = 0; i < secondList.Length(); i++)
    {
        secondList.GetNext(num);
        cout << num << " ";
    }
}