#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Stack
{

    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }
    // PUSH...
    void push(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = top;

        top = newNode;
        cout << val << " pushed..." << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty.\n";
            return;
        }
        Node *temp = top;
        top = top->next;
        cout << temp->data << " popped." << endl;
        delete temp; // to free memory.
    }
    void peek() {}
    int isEmpty()
    {
        return top == nullptr;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // ....
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
}