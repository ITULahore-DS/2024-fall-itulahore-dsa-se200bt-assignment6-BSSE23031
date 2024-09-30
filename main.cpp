#include <iostream>
#include "functions.h"
using namespace std;

int main() 
{
    Stack myStack;
    Queue myQueue;;

    int x;
    do
    {
        cout << "0: Exit" << endl;
        cout << "1: Push data in Stack" << endl;
        cout << "2: Pop data from the Stack" << endl;
        cout << "3: Get size of Stack" << endl;
        cout << "4: Clear stack" << endl;
        cout << "5: Print Stack" << endl;
        cout << "6: Peek from stack" << endl;
        cout << "7: Enqueue data in Queue" << endl;
        cout << "8: Dequeue from the Queue" << endl;
        cout << "9: Get size of Queue" << endl;
        cout << "10: Print Queue" << endl;
        cout << "11: Peek from Queue" << endl;
        cout << "Enter your choice" << endl;
        cin >> x;

        switch (x)
        {
        case 0:
        {
            return 0;
        }
        break;
        case 1:
        {
            int value;
            cout << "Enter a value you want to Push" << endl;
            cin >> value;
            myStack.push(value);
        }
        break;
        case 2:
        {
            myStack.pop();
        }
        break;
        case 3:
        {
            cout<<"The size of the stack is " << myStack.size()<<endl;
        }
        break;
        case 4:
        {
            myStack.clear();
        }
        break;
        case 5:
        {
            myStack.printStack();
        }
        break;
        case 6:
        {
            if(myStack.peek() != -1)
            {
                cout<<"The element at the top of stack is : "<< myStack.peek()<<endl;
            }
            else
            {
                cout<<"Stack is empty"<<endl;
            }
        }
        break;
        case 7:
        {
            int value;
            cout << "Enter a value you want to Enqueue" << endl;
            cin >> value;
            myQueue.enqueue(value);
        }
        break;
        case 8:
        {
            myQueue.dequeue();
        }
        break;
        case 9:
        {
            cout<<"The size of the Queue is " << myQueue.size()<<endl;
        }
        break;
        case 10:
        {
            myQueue.printQueue();
        }
        break;
        case 11:
        {
            if(myQueue.peek() != -1)
            {
                cout<<"The element at the top of Queue is : "<< myQueue.peek()<<endl;
            }
            else
            {
                cout<<"Queue is empty"<<endl;
            }
        }
        break;
        }

    } while (x >= 1 && x <= 11);
    return 0;
}
