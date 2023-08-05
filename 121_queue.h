template <typename T>
class Queue
{

    int *arr; // fixed sized array
    int curr_size, max_size, qfront, rear;

public:
    Queue(int size)
    {
        arr = new T[size];
        qfront = 0;
        rear = 0;
        curr_size = 0;
        max_size = size;
    }

    bool full()
    {
        return curr_size == max_size;
    }

    bool empty()
    {
        return curr_size == 0;
    }

    void push(int data)
    {
        if (!full())
        {
            arr[rear] = data;
            rear = (rear + 1) % max_size;
            curr_size++;
        }
    }

    void pop()
    {
        if (!empty())
        {
            int res = arr[qfront];
            qfront = (qfront + 1) % max_size;
            curr_size--;
        }
    }
    int front()
    {
        if (empty())
        {
            return -1;
        }
        return arr[qfront];
    }
};