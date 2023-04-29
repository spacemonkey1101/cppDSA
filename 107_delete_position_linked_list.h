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

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "The list is empty" << endl;
            return;
        }
        if (head == tail)
        {
            tail = NULL;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "The list is empty" << endl;
            ;
            return;
        }
        if (head == tail)
        {
            pop_front();
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void delete_position(int pos)
    {
        if (pos == 0)
        {
            pop_front();
            return;
        }
        Node *it = head;
        for (int jump = 1; jump <= pos - 1; jump++)
        {
            it = it->next;
        }
    
        Node *temp = it->next;
        it->next = temp->next;
        temp->next = NULL;
        delete temp;
    }
    ~List()
    {
        if (head != NULL)
        {
            cout << "Deleting head with value " << head->data << endl;
            delete head;
            head = NULL; // for safety
        }
        cout << "List deleted" << endl;
    }
};