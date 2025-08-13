#include <iostream> 
#include "stacktype.h" 
using namespace std; 
 

StackType::StackType() 
{ 
    head = NULL; 
} 
 

bool StackType::IsEmpty() 
{ 
    return (head == NULL); 
} 
 

bool StackType::IsFull() 
{ 
    try 
    { 
        Node* temp = new Node; 
        delete temp; 
        return false; 
    } 
    catch (bad_alloc &exception) 
    { 
        return true; 
    } 
} 
 

void StackType::Push(char value) 
{ 
    if (IsFull()) 
        throw FullStack(); 
    else 
    { 
 
        Node* temp = new Node; 
        temp->data = value; 
        temp->next = head; 
        head = temp; 
    } 
} 
 

void StackType::Pop() 
{ 
    if (IsEmpty()) 
        throw EmptyStack(); 
    else 
    { 
        Node* temp = head; 
        head = head->next; 
        delete temp; 
    } 
} 
 

char StackType::Top() 
{ 
    if (IsEmpty()) 
        throw EmptyStack(); 
    else 
        return head->data; 
} 
 

StackType::~StackType() 
{ 
    Node* i = head; 
    Node* nextNode; 
 
    while (i != NULL) 
    { 
        nextNode = i->next;  
        delete i;            
        i = nextNode;       
    } 
} 
 

void StackType::Diagnose() 
{ 
    Node* i = head; 
    while (i != NULL) 
    { 
        cout << "self: " << i << ", data: " << i->data << ", next: " << i->next << endl; 
        i = i->next; 
    } 
} 