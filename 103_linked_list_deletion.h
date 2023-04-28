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
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
        cout << "Deleting node " << data << endl;
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
        if (pos == 0)
        {
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

    int search(int key)
    {
        Node *iterator = head;
        int result_index = 0;
        while (iterator != NULL)
        {
            if (iterator->data == key)
            {
                return result_index;
            }
            iterator = iterator->next;
            result_index++;
        }
        return -1;
    }

    int helper(Node *start, int key)
    {
        if (start == NULL)
        {
            return -1;
        }
        if (start->data == key)
        {
            return 0;
        }
        int subIndex = helper(start->next, key);
        return subIndex == -1 ? -1 : subIndex + 1;
    }
    int recursiveSearch(int key)
    {

        return helper(head, key);
    }

    ~List()
    {
        if (head != NULL)
        {
            cout << "Calling delete on head with value " << head->data << endl;
            delete head;
            head = NULL; // for safety
        }
        cout << "List deleted" << endl;
    }
};