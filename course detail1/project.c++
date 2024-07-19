#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

class BinarySearchTree {
public:
    Node* root;

    BinarySearchTree() {
        root = nullptr;
    }

    // Search for a value in the BST
    bool search(int value) {
        return searchRecursive(root, value);
    }

    // Insert a value into the BST
    void insert(int value) {
        root = insertRecursive(root, value);
    }

    // Delete a value from the BST
    void deleteNode(int value) {
        root = deleteRecursive(root, value);
    }

    // Inorder traversal
    void inorder() {
        inorderRecursive(root);
        cout << endl;
    }

    // Postorder traversal
    void postorder() {
        postorderRecursive(root);
        cout << endl;
    }

    // Preorder traversal
    void preorder() {
        preorderRecursive(root);
        cout << endl;
    }

private:
    // Recursive search function
    bool searchRecursive(Node* root, int value) {
        if (root == nullptr) {
            return false;
        }
        if (root->data == value) {
            return true;
        } else if (value < root->data) {
            return searchRecursive(root->left, value);
        } else {
            return searchRecursive(root->right, value);
        }
    }

    // Recursive insert function
    Node* insertRecursive(Node* root, int value) {
        if (root == nullptr) {
            return new Node(value);
        }
        if (value < root->data) {
            root->left = insertRecursive(root->left, value);
        } else if (value > root->data) {
            root->right = insertRecursive(root->right, value);
        }
        return root;
    }

    // Recursive delete function
    Node* deleteRecursive(Node* root, int value) {
        if (root == nullptr) {
            return root;
        }
        if (value < root->data) {
            root->left = deleteRecursive(root->left, value);
        } else if (value > root->data) {
            root->right = deleteRecursive(root->right, value);
        } else {
            // Node with only one child or no child
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            // Node with two children: Get the inorder successor (smallest in the right subtree)
            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteRecursive(root->right, temp->data);
        }
        return root;
    }

    // Find the node with the minimum value in a subtree
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    // Recursive inorder traversal
    void inorderRecursive(Node* root) {
        if (root != nullptr) {
            inorderRecursive(root->left);
            cout << root->data << " ";
            inorderRecursive(root->right);
        }
    }

    // Recursive postorder traversal
    void postorderRecursive(Node* root) {
        if (root != nullptr) {
            postorderRecursive(root->left);
            postorderRecursive(root->right);
            cout << root->data << " ";
        }
    }

    // Recursive preorder traversal
    void preorderRecursive(Node* root) {
        if (root != nullptr) {
            cout << root->data << " ";
            preorderRecursive(root->left);
            preorderRecursive(root->right);
        }
    }
};

int main() {
    BinarySearchTree bst;

    // Taking input from user
    int choice, value;
    while (true) {
        cout << "1. Search" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Inorder traversal" << endl;
        cout << "5. Postorder traversal" << endl;
        cout << "6. Preorder traversal" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to search: ";
                cin >> value;
                if (bst.search(value)) {
                    cout << "Value found" << endl;
                } else {
                    cout << "Value not found" << endl;
                }
                break;
            case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                bst.insert(value);
                break;
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                bst.deleteNode(value);
                break;
            case 4:
                bst.inorder();
                break;
            case 5:
                bst.postorder();
                break;
            case 6:
                bst.preorder();
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}