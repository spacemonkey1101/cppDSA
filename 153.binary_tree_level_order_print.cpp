#include <iostream>
#include <queue>
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

void level_order_traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *t = q.front();

        if (t != NULL)
        {
            cout << t->data << " ";
            q.pop();

            if (t->left != NULL)
            {
                q.push(t->left);
            }
            if (t->right != NULL)
            {
                q.push(t->right);
            }
        }
        else
        {
            cout << endl;
            q.pop();
            if (!q.empty())
                q.push(NULL);
        }
    }
}

int main()
{
    Node *t = preorder_build();
    // INPUT : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
    level_order_traversal(t);
    // Expected OUTPUT : 1 2 4 5 7 3 6

    return 0;
}