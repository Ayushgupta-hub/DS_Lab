#include <iostream>
using namespace std;

class Queue {
    int front;
    int rear;
    int arr[10];
    int count;

public:
    Queue() {
        front = -1;
        rear = -1;
        count = 0;
    }

    void enqueue(int val) {
        if (count == 10) return;
        if (count == 0) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % 10;
        }
        arr[rear] = val;
        count++;
    }

    void dequeue() {
        if (count == 0) return;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % 10;
        }
        count--;
    }

    bool isEmpty() {
        return count == 0;
    }

    int peek() {
        if (count == 0) return -1;
        return arr[front];
    }

    void display() {
        if (count == 0) {
            cout << endl;
            return;
        }
        int i = front;
        for (int c = 0; c < count; c++) {
            cout << arr[i] << " ";
            i = (i + 1) % 10;
        }
        cout << endl;
    }

    int getSize() {
        return count;
    }
};

void interleave(Queue &q) {
    int n = q.getSize();
    if (n % 2 != 0) return;

    Queue q2;

    for (int i = 0; i < n / 2; i++) {
        int x = q.peek();
        q.dequeue();
        q2.enqueue(x);
    }

    while (!q2.isEmpty()) {
        int x = q2.peek();
        q2.dequeue();
        q.enqueue(x);

        x = q.peek();
        q.dequeue();
        q.enqueue(x);
    }
}

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout << "Original Queue: ";
    q.display();

    interleave(q);

    cout << "Interleaved Queue: ";
    q.display();

    return 0;
}

