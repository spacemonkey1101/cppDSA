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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_height = 1 + height(root->left);
    int right_height = 1 + height(root->right);
    return max(left_height, right_height);
}
int main()
{
    Node *t = preorder_build();
    // INPUT : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
    preorder_traversal(t);
    // Expected OUTPUT : 1 2 4 5 7 3 6
    cout << endl;

    cout << height(t);

    return 0;
}
