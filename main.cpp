#include <iostream>
#include "functions.h"
using namespace std;



int main() {
    Stack myStack;
    Queue myQueue;
    int choice, insertion;

    while (true) {
        cout << "Menu:" << endl;
    cout << "1. Push For Stack " << endl;
    cout << "2. Enqueue For Queue " << endl;
    cout << "3. Pop From Stack" << endl;
    cout << "4. Dequeue From Queue" << endl;
    cout << "5. Peek from Stack" << endl;
    cout << "6. Clear Stack" << endl;
    cout << "7. Display" << endl;
    cout << "8. Exit" << endl;
    cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the insertion ";
                cin >> insertion;
                myStack.push(insertion);
                myStack.printStack();
                break;
            case 2:
                cout << "Enter the insertion ";
                cin >> insertion;
                myQueue.enqueue(insertion);
                myQueue.printQueue();
                break;
            case 3:
                myStack.pop();
                myStack.printStack();
                break;
            case 4:
                
                myQueue.dequeue();
                myQueue.printQueue();break;
            case 5:
                cout << myStack.peek() << endl;
                break;
            case 6:
                myStack.clear();
                break;
            case 7:
            cout<<"Stack: \n";
                myStack.printStack();
                cout<<"Queue:\n";
                myQueue.printQueue();
                break;
            case 8:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}
