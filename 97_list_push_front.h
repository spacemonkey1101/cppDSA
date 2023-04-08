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
        // create a new list if empty
        //  if head is null, tail will also be
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else // if a list is not empty
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }
};