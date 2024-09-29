#include <iostream>
#include "functions.h"
using namespace std;

void Node::setData(int data){ // data setter
this->data = data;
}

void Node::setNext(Node* val){  // setting next node
this->next = val;
}

int Node::getData(){ // data getter
    return data;
}

Node* Node::getNext(){  // next node getter
    return next;
}

void Stack::push(int data){   // pushes in stack at top
    Node *n1 = new Node(data);
    if (top == nullptr)
    {
        top = n1; // if empty stack
    }

    else{
    n1->setNext(top);
    top = n1;
    }
    count++;
}

void Stack::pop(){ // pops the top from stack
    if (top == nullptr)
    {
        return;
    }
    Node* temp = top;
    top = top->getNext(); 
    delete temp;
    count--;
}

bool Stack::isEmpty(){ // checks if stack empty
    if(count == 0 && top == nullptr){
        return true;
    }
    return false;
}

int Stack::size(){ // returns the size of stack
    return count;
}

int Stack::peek(){ // returns data from top
    if (isEmpty())
    {
        return -1;
    }
    return top->getData();
}

void Stack::clear(){ //clears the stack
    while(!isEmpty())
    {
        pop();
    }
}
void Stack::printStack(){ // print Stack
    Node* temp = top;
    for (int i = 0 ;i < count; i++){
        cout<<"Element :" << temp->getData()<<endl;
        temp = temp->getNext();
    }
}

void Queue::enqueue(int data){ // Enqueue's data in queue
Node *n1 = new Node(data);
    if (top == nullptr)
    {
        top = n1; // if empty queue
        end = n1;

    }

    else{
    end->setNext(n1);
    end = n1;
    }
    count++;
}
void Queue::dequeue(){ // Dequeue's from the queue
     if (count == 0 && top == nullptr)
    {
        return;
    }
    if(end == top){
        top = nullptr;
        end = nullptr;
        count--;
        return;
    }
    Node* temp = top;
    top = top->getNext(); 
    delete temp;
    count--;
}

bool Queue::isEmpty(){ // Check if empty
    if(count == 0){
        return true;
    }
    return false;
}

int Queue::size(){ // returns queue size
    return count;
}


void Queue::printQueue(){ // print queue
    Node* temp = top;
    for (int i = 0 ;i < count; i++){
        cout<<"Element :" << temp->getData()<<endl;
        temp = temp->getNext();
    }
}

int Queue::peek(){ // returns data from top
    if (isEmpty())
    {
        return -1;
    }
    return top->getData();
}