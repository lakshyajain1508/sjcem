#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* findMin(Node* root) {
    if (root == nullptr) return nullptr;
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        cout << data << " inserted successfully." << endl;
        return createNode(data);
    } else if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    } else {
        cout << "\nDuplicate value '" << data << "' not allowed." << endl;
    }
    return root;
}

void search(Node* root, int data) {
    if (root == nullptr) {
        cout << "\nTree is empty. Cannot search." << endl;
        return;
    }
    Node* q = root;
    while (q != nullptr) {
        if (q->data == data) {
            cout << "\nValue " << data << " found in the tree." << endl;
            return;
        } else if (data < q->data) {
            q = q->left;
        } else {
            q = q->right;
        }
    }
    cout << "\nValue " << data << " was not found in the tree." << endl;
}

Node* delValue(Node* root, int key) {
    if (root == nullptr) {
        return root;
    }

    // Find the node to delete
    if (key < root->data) {
        root->left = delValue(root->left, key);
    } else if (key > root->data) {
        root->right = delValue(root->right, key);
    } else {
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        else if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = delValue(root->right, temp->data);
    }
    return root;
}

void display(Node* root) {
    if (root == nullptr) {
        return;
    }
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}

int main() {
    Node* root = nullptr;
    int ch, data;
    while (true) {
        cout << "\n--- BINARY SEARCH TREE OPERATIONS ---\n";
        cout << "1. INSERT\n";
        cout << "2. SEARCH\n";
        cout << "3. DISPLAY (In-order)\n";
        cout << "4. DELETE\n";
        cout << "5. EXIT\n";
        cout << "\nEnter Your Choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter Value to Insert: ";
                cin >> data;
                root = insert(root, data);
                break;
            case 2:
                cout << "Enter Value to Search: ";
                cin >> data;
                search(root, data);
                break;
            case 3:
                if (root == nullptr) {
                    cout << "\nTree is empty.";
                } else {
                    cout << "\nBinary Tree (In-order): ";
                    display(root);
                }
                cout << "\n";
                break;
            case 4:
                if (root == nullptr) {
                    cout << "\nTree is empty. Cannot delete." << endl;
                } else {
                    cout << "\nEnter a value to delete: ";
                    cin >> data;
                    Node* oldRoot = root;
                    root = delValue(root, data);
                    cout << "\nValue " << data << " deleted (if it existed)." << endl;
                }
                break;
            case 5:
                cout << "\nExiting program. Goodbye! 👋\n";
                return 0;
            default:
                cout << "\nINVALID CHOICE! Please try again." << endl;
        }
    }
    return 0;
}