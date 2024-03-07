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
    neNode->left = newNode->right = nullptr;
    return newNode;
}
int main()
{
    // level 2
    Node *root = createNode(1);
    // level two
    root->left = cerateNode(2);
    root->right = createNode(3);
    // level three
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    // level four
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    cin.get();
}
