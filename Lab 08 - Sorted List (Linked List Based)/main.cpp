#include <iostream>
#include "sortedtype.cpp"


using namespace std;

int main()
{
    SortedType<int> list;
    
    cout << "Length: " << list.Length() << endl;
    
    list.Insert(5);
    list.Insert(7);
    list.Insert(4);
    list.Insert(2);
    list.Insert(1);
    
    int num1;
    for (int i = 0; i < list.Length(); i++)
    {
        list.GetNext(num1);
        cout << num1 << " ";
    }
    
    bool found;
    list.Search(6, found);
    
    cout << (found ? "Item is found" : "Item is not found") << endl;
    list.Search(5, found);
    cout << (found ? "Item is found" : "Item is not found") << endl;
   
    list.Delete(1);
    list.Reset();
    for (int i = 0; i < list.Length(); i++)
    {
        list.GetNext(num1);
        cout << num1 << " ";
    }
    cout << endl;

    
    SortedType<int> firstList;
    SortedType<int> secondList;
        
        // Insert into firstList
        int firstValues[] = {10, 1, 5, 6, 10, 14, 20, 25, 31, 38, 40};
        for (int val : firstValues)
            firstList.Insert(val);
    
        // Insert into secondList
        int secondValues[] = {12, 2, 4, 7, 9, 16, 19, 23, 24, 32, 35, 36, 42,10,1,5};
        for (int val : secondValues)
            secondList.Insert(val);


    // Step 1: Insert all values from firstList and secondList into a new unionList
    SortedType<int> unionList;
    SortedType<int> intersectionList;
    int num;

    // Insert all from firstList
 
    firstList.Reset();
    for (int i = 0; i < firstList.Length(); i++) {
        firstList.GetNext(num);
        unionList.Search(num, found);
        if (!found) unionList.Insert(num);
    }

    // Insert all from secondList
    secondList.Reset();
    for (int i = 0; i < secondList.Length(); i++) {
        secondList.GetNext(num);
        unionList.Search(num, found);
        if (!found) unionList.Insert(num);
    }

    // Display union
    unionList.Reset();
    cout << "Union (∪) = {";
    for (int i = 0; i < unionList.Length(); i++) {
        unionList.GetNext(num);
        cout << num<< " ";
      
    }
    cout << "}" << endl;
// Intersection (∩);
   
    firstList.Reset();
    for (int i = 0; i < firstList.Length(); i++) {
        firstList.GetNext(num);
        secondList.Search(num, found);
        if (found) {
            intersectionList.Search(num, found); // avoid duplicates
            if (!found) intersectionList.Insert(num);
        }
    }
    intersectionList.Reset();
    cout << "Intersection (∩) = {";
    for (int i = 0; i < intersectionList.Length(); i++) {
        intersectionList.GetNext(num);
        cout << num;
        if (i < intersectionList.Length() - 1)
            cout << ", ";
    }
    cout << "}" << endl;

    
    return 0;
}


