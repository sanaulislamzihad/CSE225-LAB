#include <iostream>
#include "queuetype.cpp"

using namespace std;

void printBinary(int n)
{
    QueueType<string> que;

    string temp = "1";
    que.Enqueue(temp);

    while(n)
    {
        que.Dequeue(temp);
        cout << temp << endl;

        string s1, s2;
        s1 = temp + '0';
        que.Enqueue(s1);
        s2 = temp + '1';
        que.Enqueue(s2);
        n = n - 1;
    }
}

template<class T>
void printQueue(QueueType<T> &que)
{
    QueueType<T> aux;
    int num;

    while(!que.IsEmpty())
    {
        que.Dequeue(num);
        aux.Enqueue(num);
        cout << num << " ";
    }

    while(!aux.IsEmpty())
    {
        aux.Dequeue(num);
        que.Enqueue(num);
    }
    cout << endl;
}

int main()
{
    QueueType<int> que(5);

    cout << (que.IsEmpty() ? "Queue is empty" : "Queue is not empty") << endl;

    que.Enqueue(5);
    que.Enqueue(7);
    que.Enqueue(4);
    que.Enqueue(2);

    cout << (que.IsEmpty() ? "Queue is empty" : "Queue is not empty") << endl;

    cout << (que.IsFull() ? "Queue is full" : "Queue is not full") << endl;

    que.Enqueue(6);

    printQueue(que);

    cout << (que.IsFull() ? "Queue is full" : "Queue is not full") << endl;
    que.Enqueue(8);

    int num;
    que.Dequeue(num);
    que.Dequeue(num);

    printQueue(que);

    que.Dequeue(num);
    que.Dequeue(num);
    que.Dequeue(num);

    cout << (que.IsEmpty() ? "Queue is empty" : "Queue is not empty") << endl;

    que.Dequeue(num);

    printBinary(10);

    return 0;
}
