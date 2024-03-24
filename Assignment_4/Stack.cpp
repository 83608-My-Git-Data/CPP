#include <iostream>
using namespace std;

class Stack {
private:
    int size;
    int top;
    int *ptr;

public:
    Stack(int size = 5) {
        this->size = size;
        top = -1;
        ptr = new int[size];
    }

    void push(int element) {
        if (!isFull()) {
            top++;
            ptr[top] = element;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (!isEmpty())
            top--;
        else
            cout << "Stack Underflow" << endl;
    }

    int peek() {
        if (!isEmpty())
            return ptr[top];
        else {
            cout << "Stack is empty" << endl;
            return -1; // Return some default value or throw an exception
        }
    }

    void print() {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }

    bool isFull() {
        return top == (size - 1);
    }

    bool isEmpty() {
        return top == -1;
    }

    ~Stack() {
        delete[] ptr;
        ptr = NULL;
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);

    cout << "Stack elements: ";
    s.print();

    cout << "Peek: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "Stack elements after popping: ";
    s.print();

    return 0;
}
