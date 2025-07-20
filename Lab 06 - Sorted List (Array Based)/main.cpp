#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.cpp"

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
    
    int num;
    for (int i = 0; i < list.Length(); i++)
    {
        list.GetNext(num);
        cout << num << " ";
    }
    
    bool found;
    list.Search(6, found);
    
    cout << (found ? "Item is found" : "Item is not found") << endl;
    list.Search(5, found);
    cout << (found ? "Item is found" : "Item is not found") << endl;
    cout << (list.IsFull() ? "List is full" : "List is not full") << endl;
    list.Delete(1);
    list.Reset();
    for (int i = 0; i < list.Length(); i++)
    {
        list.GetNext(num);
        cout << num << " ";
    }
    cout << endl;
    cout << (list.IsFull() ? "List is full" : "List is not full") << endl;
    SortedType<timeStamp> timeList;

    timeStamp t1(15, 34, 23);
    timeStamp t2(13, 13, 02);
    timeStamp t3(43, 45, 12);
    timeStamp t4(25, 36, 17);
    timeStamp t5(52, 02, 20);

    timeList.Insert(t1);
    timeList.Insert(t2);
    timeList.Insert(t3);
    timeList.Insert(t4);
    timeList.Insert(t5);

    timeStamp temp;

    for(int i = 0; i < timeList.Length(); i++)
    {
        timeList.GetNext(temp);
        temp.printTime();
    }



    return 0;
}
