class Node
{
    int data;
    Node *next;

public:
    /*
    We can create the constructor as a initialization list
    Node(int data):this->data(data),next(NULL){}
    */

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class List
{
    Node *head; // start of the list
    Node *tail; // not needed but it stores the end of the lis
public:
    List()
    {
        head = tail = NULL;
    }
};