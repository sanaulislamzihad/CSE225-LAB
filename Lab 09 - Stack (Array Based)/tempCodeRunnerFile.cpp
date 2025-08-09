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