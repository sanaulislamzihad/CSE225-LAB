#include <iostream>
#include "bst.cpp"
// #include "queuetype.cpp"
using namespace std;

int main()
{
    BST<int> myTree;

    myTree.Insert(50);
    myTree.Insert(30);
    myTree.Insert(20);
    myTree.Insert(40);
    myTree.Insert(70);
    myTree.Insert(60);
    myTree.Insert(80);

    int value;

    myTree.Reset(IN_ORDER);
    cout << "IN-ORDER: ";
    for(int i = 0; i < myTree.Length(); i++)
    {
        myTree.GetNext(value, IN_ORDER);
        cout << value << " ";
    }
    cout << endl;

    myTree.Reset(PRE_ORDER);
    cout << "PRE-ORDER: ";
    for(int i = 0; i < myTree.Length(); i++)
    {
        myTree.GetNext(value, PRE_ORDER);
        cout << value << " ";
    }
    cout << endl;

    myTree.Reset(POST_ORDER);
    cout << "POST-ORDER: ";
    for(int i = 0; i < myTree.Length(); i++)
    {
        myTree.GetNext(value, POST_ORDER);
        cout << value << " ";
    }
    cout << endl;
    bool found;
    int searchItem;
    searchItem = 20;
    myTree.Search(searchItem, found);
    cout << (found ? "Found" : "Not Found") << endl;
    searchItem = 15;
    myTree.Search(searchItem, found);
    cout << (found ? "Found" : "Not Found") << endl;

    myTree.Delete(20);
    cout << endl;

    myTree.Reset(IN_ORDER);
    cout << "IN-ORDER: ";
    for(int i = 0; i < myTree.Length(); i++)
    {
        myTree.GetNext(value, IN_ORDER);
        cout << value << " ";
    }
    cout << endl;

    myTree.Reset(PRE_ORDER);
    cout << "PRE-ORDER: ";
    for(int i = 0; i < myTree.Length(); i++)
    {
        myTree.GetNext(value, PRE_ORDER);
        cout << value << " ";
    }
    cout << endl;

    myTree.Reset(POST_ORDER);
    cout << "POST-ORDER: ";
    for(int i = 0; i < myTree.Length(); i++)
    {
        myTree.GetNext(value, POST_ORDER);
        cout << value << " ";
    }
    cout << endl;


    BST<int> opTree;

    opTree.Insert(11);
    opTree.Insert(9);
    opTree.Insert(4);
    opTree.Insert(2);
    opTree.Insert(7);
    opTree.Insert(3);
    opTree.Insert(17);
    opTree.Insert(0);
    opTree.Insert(5);
    opTree.Insert(1);

    cout << "Before OP: " << endl;

    opTree.Reset(IN_ORDER);
    cout << "IN-ORDER: ";
    for(int i = 0; i < opTree.Length(); i++)
    {
        opTree.GetNext(value, IN_ORDER);
        cout << value << " ";
    }
    cout << endl;

    opTree.Reset(PRE_ORDER);
    cout << "PRE-ORDER: ";
    for(int i = 0; i < opTree.Length(); i++)
    {
        opTree.GetNext(value, PRE_ORDER);
        cout << value << " ";
    }
    cout << endl;

    opTree.Reset(POST_ORDER);
    cout << "POST-ORDER: ";
    for(int i = 0; i < opTree.Length(); i++)
    {
        opTree.GetNext(value, POST_ORDER);
        cout << value << " ";
    }
    cout << endl;

    cout << "After OP:" << endl;
    opTree.BuildOptimalTree();


    opTree.Reset(IN_ORDER);
    cout << "IN-ORDER: ";
    for(int i = 0; i < opTree.Length(); i++)
    {
        opTree.GetNext(value, IN_ORDER);
        cout << value << " ";
    }
    cout << endl;

    opTree.Reset(PRE_ORDER);
    cout << "PRE-ORDER: ";
    for(int i = 0; i < opTree.Length(); i++)
    {
        opTree.GetNext(value, PRE_ORDER);
        cout << value << " ";
    }
    cout << endl;

    opTree.Reset(POST_ORDER);
    cout << "POST-ORDER: ";
    for(int i = 0; i < opTree.Length(); i++)
    {
        opTree.GetNext(value, POST_ORDER);
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
