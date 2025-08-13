#ifndef STACKTYPE_H 
#define STACKTYPE_H 
 
 
class FullStack {};  

class EmptyStack {}; 
 

class StackType 
{ 
    struct Node 
    { 
        char data; 
        Node* next; 
    }; 
private: 
    Node* head; 
public: 
    StackType(); 
    ~StackType(); 
    bool IsEmpty(); 
    bool IsFull(); 
    void Push(char); 
    void Pop(); 
    void Diagnose();
    char Top(); 
}; 
 
#endif