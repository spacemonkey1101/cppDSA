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
        left = right = NULL;
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
int main()
{
    Node *t = preorder_build();
    // INPUT : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
}