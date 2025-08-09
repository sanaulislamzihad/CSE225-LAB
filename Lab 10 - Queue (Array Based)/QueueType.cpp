#include "queuetype.h" 
#include <iostream> 
using namespace std; 
 
template<class T> 
QueueType<T>::QueueType() 
{ 
    data = new T[SIZE]; 
    front = rear = 0; 
} 
 
template<class T> 
QueueType<T>::QueueType(int s) 
{ 
    size = s + 1; 
    data = new T[size]; 
    front = rear = 0; 
} 
  
template<class T> 
QueueType<T>::~QueueType() 
{ 
    delete [] data; 
} 
 
template<class T> 
void QueueType<T>::MakeEmpty() 
{ 
    front = rear = 0; 
} 
 
template<class T> 
bool QueueType<T>::IsEmpty() 
{ 
    return (front == rear); 
} 
 
template<class T> 
bool QueueType<T>::IsFull() 
{ 
    return ((rear + 1) % size == front); // Full if next position of rear equals front 
} 
 
template<class T> 
void QueueType<T>::Enqueue(T value) 
{ 
    try 
    { 
        if (IsFull()) 
        { 
            throw FullQueue(); 
        } 
        else 
        { 
            rear = (rear + 1) % size; // Move rear to next position 
            data[rear] = value;       // Store the new value at the rear 
        } 
    } 
    catch (FullQueue e) 
    { 
        cout << "Queue Overflow" << endl; 
    } 
} 
 
template<class T> 
void QueueType<T>::Dequeue(T &value) 
{ 
    try 
    { 
        if (IsEmpty()) 
            throw EmptyQueue(); 
        else 
        { 
            front = (front + 1) % size; // Move front to next position  
            value = data[front];        // Retrieve the value from the front 
        } 
    } 
    catch (EmptyQueue e) 
    { 
        cout << "Queue Underflow" << endl; 
    } 
} 