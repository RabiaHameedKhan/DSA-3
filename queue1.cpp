#include <iostream>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;
int size = 5;

void insert() {
    if (rear == size - 1) {
        cout << "Queue is full" << endl;
    } else {
        int input;
        cout << "Enter the element to insert: ";
        cin >> input;
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = input;
        cout << input << " inserted into the queue" << endl;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Deleted element is: " << queue[front] << endl;
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Front element is: " << queue[front] << endl;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n1. Insert\n2. Delete\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            insert();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
