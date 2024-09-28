#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include<iostream>
using namespace std;

class Node{
int data;
Node* next;
public:
Node(int value){
    data = value;
    next = nullptr;
}
void setNext(Node* val);
Node* getNext();
void setData(int data);
int getData();
~Node(){
}
};


class Stack{
    int count;
    Node* top;
    public:
    Stack(){
        count = 0;
        top = nullptr; 
    }
    bool isEmpty(); // Empty check for stack
    void push(int data); // data insertion in stack
    void pop(); //Deleting from stack
    int size(); //Size getter
    void printStack(); //Print stack
    void clear(); //Clearing stack
    int peek();
    ~Stack(){
        Node* temp = top;
    while (temp != NULL) {
        Node* next = temp->getNext(); 
        delete temp; 
        temp = next;  
        }
    top = NULL; 
    }
};
class Queue{
   int count;
    Node* top;
    Node* end;
    int *arr;
    public:
    Queue(){
       count = 0;
        top = nullptr; 
        end = nullptr;
    }
    bool isEmpty(); // empty check
    void enqueue(int data); //inserting in queue
    void dequeue(); //dequeuing 
    int size(); //size getter
    void printQueue(); //printing queue

    ~Queue(){
        cout<<"Destructor\n";
        Node* temp = top;
    while (temp != NULL) {
        Node* next = temp->getNext(); 
        delete temp; 
        temp = next;  
        }
    top = NULL; 
    }

};

#endif
