#include <iostream>
using namespace std;

class List;
class Node
{
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    friend class List;
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    void push_front(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void print_list()
    {
        Node *iterator = head;
        while (iterator != NULL)
        {
            cout << iterator->data << ",";
            iterator = iterator->next;
        }
        cout << endl;
    }

    void insert(int data, int pos)
    {
        if(pos == 0){
            push_front(data);
            return;
        }
        Node *iterator = head;
        for (int jump = 1; jump <= pos - 1; jump++)
        {
            iterator = iterator->next;
        }
        Node *n = new Node(data);
        n->next = iterator->next;
        iterator->next = n;
    }
};