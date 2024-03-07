// INORDER(LEFT,DATA,RIGHT)
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void printTree(Node *root, int depth)
{
    if (root == nullptr)
        return;

    for (int i = 0; i < depth; ++i)
        cout << "  \\  ";
    printTree(root->left, depth + 1);

    cout << root->data << endl;
    printTree(root->right, depth + 1);
}

int main()
{
    // level 2
    Node *root = createNode(1);
    // level two
    root->left = createNode(2);
    root->right = createNode(3);
    // level three
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    // level four
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    printTree(root, 0);

    cin.get();
}
