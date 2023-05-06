// forward declaration
template <typename T>
class Stack;

template <typename T>
class Node
{
    T data;
    Node<T> *next;

public:
    Node(T d) : data(d), next(NULL) {}

    friend class Stack<T>;
};

// we will hide the implemention of the linked list (abstraction)
template <typename T>
class Stack
{
    Node<T> *head;

public:
    Stack() : head(NULL) {}

    void push(T d)
    {
        Node<T> *n = new Node<T>(d);
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            n->next = head;
            head = n;
        }
    }

    void pop()
    {
        if (!empty())
        {
            Node<T> *it = head;
            head = head->next;
            it->next = NULL;
            delete it;
        }
    }
    T top()
    {
        if (!empty())
        {
            return head->data;
        }
    }
    bool empty()
    {
        return head == NULL;
    }
};