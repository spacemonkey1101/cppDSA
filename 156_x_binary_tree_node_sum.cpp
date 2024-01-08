#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

int levelOrderTraversalSum(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int s = 0;
    while (!q.empty())
    {
        Node *t = q.front();
        q.pop();
        if (t != NULL)
        {
            s += t->key;
            if (t->left)
            {
                q.push(t->left);
            }
            if (t->right)
            {
                q.push(t->right);
            }
        }
    }
    return s;
}

int sumBT(Node *root)
{
    return levelOrderTraversalSum(root);
}