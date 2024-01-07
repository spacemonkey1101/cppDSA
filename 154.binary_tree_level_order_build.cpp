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

Node *level_order_build()
{
    int d;
    cin >> d;

    Node *root = new Node(d);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *t = q.front();
        q.pop();

        int left, right;
        cin >> left;

        if (left != -1)
        {
            t->left = new Node(left);
            q.push(t->left);
        }
        cin >> right;

        if (right != -1)
        {
            t->right = new Node(right);
            q.push(t->right);
        }
    }

    return root;
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
    Node *t = level_order_build();
    // INPUT : 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
    level_order_traversal(t);
    // Expected OUTPUT : 1 2 3 4 5 6 7

    return 0;
}