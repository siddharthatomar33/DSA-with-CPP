#include <iostream>
using namespace std;

// Node structure.....
struct Node {
    int data;
    Node* next;
};

// Queue class....
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    // Enqueue operation..........
    void enqueue(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = nullptr;

        if (rear == nullptr) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }

        cout << value << " enqueued.\n";
    }

    // Dequeue operation
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        // If queue becomes empty
        if (front == nullptr)
            rear = nullptr;

        cout << temp->data << " dequeued.\n";
        delete temp;
    }

    // Peek front element
    void peek() {
        if (front != nullptr)
            cout << "Front element: " << front->data << endl;
        else
            cout << "Queue is empty.\n";
    }

    // Display queue elements
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function to test queue
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.peek();
    q.display();

    return 0;
}