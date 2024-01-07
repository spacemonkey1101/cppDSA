#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *preorder_build()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    Node *n = new Node(d);
    n->left = preorder_build();
    n->right = preorder_build();

    return n;
}

void preorder_traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
void inorder_traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder_traversal(root->left);
    cout << root->data << " ";
    inorder_traversal(root->right);
}

void postorder_traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout << root->data << " ";
}
int main()
{
    Node *t = preorder_build();
    // INPUT : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
    preorder_traversal(t);
    // Expected OUTPUT : 1 2 4 5 7 3 6

    cout << endl;
    inorder_traversal(t);
    // Expected OUTPUT : 4 2 7 5 1 3 6

    cout << endl;
    postorder_traversal(t);
    // Expected OUTPUT : 4 7 5 2 6 3 1

    return 0;
}