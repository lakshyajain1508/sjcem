#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int value)
{
    Node *nNode = new Node();
    nNode->data = value;
    nNode->left = nullptr;
    nNode->right = nullptr;
    cout << "\nNode with value " << value << " created successfully." << endl;
    return nNode;
}

Node *insert(Node *root, int data)
{
    if (root == nullptr)
    {
        return createNode(data);
    }
    else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        cout << "\nDuplicate not allowed." << endl;
    }
    return root;
}

// Traversing BST in Inorder
void display(Node *root)
{
    if (root == nullptr)
        return;
    display(root->left);
    cout << root->data << ", ";
    display(root->right);
}

int main()
{
    Node *root = nullptr;
    int ch, data;
    while (1)
    {
        cout << "\n---BINARY TREE OPERATIONS---\n1.INSERT\n2.Inorder/Display\n5.EXIT\nEnter Your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter Value : ";
            cin >> data;
            root = insert(root, data);
            break;
        case 2:
            cout << "\nInorder Traversal of the Binary Search Tree: ";
            display(root);
            cout << "\n";
            break;
        case 3:
            return 0;
        } // switch ends
    } // while ends
    return 0;
}