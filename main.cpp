#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    QUEUE Q;
    char x;
    int c=-1;
    Q.MAKENULL();
    while (c != 0) {
        cout << "1 - ENQUEUE" << endl;
        cout << "0 - Exit" << endl;
        cout << "Your choice: ";
        cin >> c;
        switch (c) {
        case 1: {
            cout << endl << "Enter element: ";
            cin >> x;
            Q.ENQUEUE(x);
            system("cls");
            break;
        }
        case 0: {
            break; 
        }
        default: {
            cout << "Invalid choice." << endl;
            system("pause");
            system("cls");
            break;
        }
        }
    }
    Q.DEQUEUE();
    Q.DEQUEUE();
    Q.ENQUEUE('<');
    while (!Q.EMPTY()) {
        cout << Q.FRONT();
        Q.DEQUEUE();
    }
    cout << endl;
	return 0;
}