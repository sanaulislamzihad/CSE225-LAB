#include<iostream>
#include"StackType.cpp"
using namespace std;
void printstack(StackType&STK){
    StackType aux;
    while(!STK.IsEmpty()){
        aux.Push(STK.Top());
        STK.Pop();
    }
    while(!aux.IsEmpty()){
        cout<<aux.Top()<<" ";
        STK.Push(aux.Top());
        aux.Pop();
    }
    cout<<endl;
}

int main(){
    StackType STK;
    cout<<(STK.IsEmpty()?"stack is empty":"stack is not empty")<<endl;
    STK.Push('Z');
    STK.Push('i');
    STK.Push('h');
    STK.Push('a');
    STK.Push('d');
    cout<<(STK.IsEmpty()?"stack is empty":"stack is not empty")<<endl;
    printstack(STK);
    STK.Push('x');
    printstack(STK);
    STK.Pop();
    STK.Pop();
    cout<<"top: "<<STK.Top()<<endl;

    return 0;
}