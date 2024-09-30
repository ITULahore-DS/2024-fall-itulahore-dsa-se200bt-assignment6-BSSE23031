#include <iostream>
#include "functions.h"
using namespace std;

Node::Node(int value)
{
    data = value;
    next = nullptr;
}
Node::~Node()
{

}
void Node::setNext(Node* nextNode)
{
    next = nextNode;
}
Node* Node::getNext()
{
    return next;
}
void Node::setData(int dataValue)
{
    data = dataValue;
}
int Node::getData()
{   
    return data;
}

Stack::Stack()
{
    top = nullptr;
    count = 0;
}
Stack::~Stack()
{
    clear();
}
bool Stack::isEmpty()
{
    if(count == 0)
    {
        return true;
    }
    return false;
}
void Stack::push(int data)
{
    Node* temp = new Node(data);
    if(top == nullptr)
    {
        top = temp;
    }
    else
    {  
        Node* current = top;
        top = temp;
        top->setNext(current);
    }

    count++;
}
void Stack::pop()
{
    if(top != nullptr)
    {
        Node* temp = top;
        top = top->getNext();
        delete temp;
        count--;
    }
    else
    {
        cout<<"Stack is empty"<<endl;
    }
}
int Stack::peek()
{
    if(top != nullptr)
    {
        return top->getData();
    }
    return -1;

}
int Stack::size()
{
    return count;
}
void Stack::clear()
{
   while(!isEmpty())
    {
        pop();
    }
}
void Stack::printStack()
{
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
        return;
    }

    cout<<endl;

    Node* current = top;
    for(int i=0;i<count;i++)
    {
        cout<<current->getData()<<"\t";
        current = current->getNext();
    }
    cout<<endl;
}

Queue::Queue()
{
    top = nullptr;
    count = 0;
}
Queue::~Queue()
{
    while(top != nullptr)
    {
        Node* temp = top;
        top = top->getNext();
        delete temp;
    }
}
bool Queue::isEmpty()
{
    if(count == 0)
    {
        return true;
    }
    return false;
}
void Queue::enqueue(int data)
{
    Node* temp = new Node(data);
    if(top == nullptr)
    {
        top = temp;
    }
    else
    {
        Node* current = top;
        while(current->getNext() != nullptr)
        {
            current = current->getNext();
        }
        current->setNext(temp);
    }
    count++;
}
void Queue::dequeue()
{
    if(top != nullptr)
    {
        Node* temp = top;
        top = top->getNext();
        delete temp;
        count--;
    }
    else
    {
        cout<<"Queue is empty"<<endl;
    }
}
int Queue::size()
{
    return count;
}
void Queue::printQueue()
{
    if(isEmpty())
    {
        cout<<"Queue is empty"<<endl;
        return;
    }

    cout<<endl;

    Node* current = top;
    while(current != nullptr)
    {
        cout<<current->getData()<<"\t";
        current = current->getNext();
    }

    cout<<endl;
}