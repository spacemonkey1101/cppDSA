#include <iostream>
using namespace std;

class List; // forward declaration
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
    friend class List; // declared in the base class
    // A friend class can access private and protected members of other classes in which it is declared as a friend

    // List is not defined here we need to do a forward declaration here.
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

            // data and next cannot be accessed here without making
            // List a friend to Node
            cout << iterator->data << ",";
            iterator = iterator->next;
        }
    }
};