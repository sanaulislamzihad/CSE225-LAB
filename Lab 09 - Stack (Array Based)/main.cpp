#include <iostream>
#include "stacktype.cpp"

using namespace std;

template <class T>
void printStack (StackType<T> &stk)
{
    StackType<T> aux;
    
    while(!stk.IsEmpty())
    {
        aux.Push(stk.Top());
        stk.Pop();
    }
    
    while(!aux.IsEmpty())
    {
        cout << aux.Top() << " ";
        stk.Push(aux.Top());
        aux.Pop();
    }
    cout << endl;
}

void isBalanced(string s)
{
    StackType<char> stk;
    
    bool balanced = true;
    
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i]=='(')
        {
            stk.Push('(');
        }
        else if (s[i]==')' && !stk.IsEmpty())
        {
            stk.Pop();
        }
        else if (s[i]==')' && stk.IsEmpty())
        {
            balanced = false;
            break;
        }
    }
    
    if (stk.IsEmpty() && balanced)
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }
}

int main()
{
    StackType<int> stk;
    
    cout << (stk.IsEmpty()? "Stack is Empty" : "Stack is not Empty") << endl;
    
    stk.Push(5);
    stk.Push(7);
    stk.Push(4);
    stk.Push(2);
    
    cout << (stk.IsEmpty()? "Stack is Empty": "Stack is not Empty") << endl;
    cout << (stk.IsFull()? "Stack is Full" : "Stack is not Full") << endl;
    printStack(stk);
    stk.Push(3);
    printStack(stk);
    cout << (stk.IsFull()? "Stack is Full": "Stack is not Full") << endl;
    stk.Pop();
    stk.Pop();
    cout << "Top: " << stk.Top() << endl;
    isBalanced("()");
    isBalanced("(())) () () () ()");
    isBalanced("(())) () ((()");
    isBalanced("(()))) ((()");
    isBalanced("(())))))))");
    return 0;
}
