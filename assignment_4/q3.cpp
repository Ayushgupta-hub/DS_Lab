#include <iostream>
#define MAX 5
using namespace std;

class Queue {
public:
    int front;
    int rear;
    int array[MAX];

    Queue() : front(-1), rear(-1) {}

    bool isFull() {
        return (front == (rear + 1) % MAX);
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX;
        }
        array[rear] = val;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }
        cout << "Dequeued: " << array[front] << endl;
        if (front == rear) {
            front = rear = -1; // queue becomes empty
        } else {
            front = (front + 1) % MAX;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        return array[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        int i = front;
        cout << "Queue elements: ";
        while (true) {
            cout << array[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, val;

    do {
        cout << "\n--- Circular Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek (Front Element)\n";
        cout << "4. Display Queue\n";
        cout << "5. Check if Empty\n";
        cout << "6. Check if Full\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> val;
            q.enqueue(val);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            val = q.peek();
            if (val != -1)
                cout << "Front element: " << val << endl;
            break;

        case 4:
            q.display();
            break;

        case 5:
            cout << (q.isEmpty() ? "Queue is Empty" : "Queue is NOT Empty") << endl;
            break;

        case 6:
            cout << (q.isFull() ? "Queue is Full" : "Queue is NOT Full") << endl;
            break;

        case 0:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
