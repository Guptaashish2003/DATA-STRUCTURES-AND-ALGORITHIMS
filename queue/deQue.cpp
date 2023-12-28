#include <iostream>
using namespace std;
class DeQue
{
public:
    int *arr;
    int size;
    int rear;
    int front;
    DeQue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }
    void push_rear(int data)
    {
        if (front == 0 && rear == size - 1)
        {
            cout << "your queue is full " << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        } // not necessary if question does not ask for maintain circular nature ;
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void push_fornt(int data)
    {
        if (front == 0 && rear == size - 1)
        {
            cout << "your queue is full " << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[front] = data;
        }
        else if (rear != size - 1 && front == 0)
        {
            front = size - 1;
            arr[front] = data;
        } // not necessary if question does not ask for maintain circular nature ;
        else
        {
            front--;
            arr[front] = data;
        }
    }

    void pop_front()
    {
        if (front == -1)
        {
            cout << "queue is empty " << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    void pop_rear()
    {
        if (front == -1)
        {
            cout << "queue is empty " << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
    }
    int getFront()
    {
        if (front == rear)
        {
            cout << "queue is empty" << endl;
        }
        else if (front > rear)
        {
            return arr[rear];
        }
        else
        {
            return arr[front];
        }
    }
    int getRear()
    {
        if (front == rear)
        {
            cout << "queue is empty" << endl;
        }
        else if (front > rear)
        {
            return arr[front];
        }
        else
        {
            return arr[rear];
        }
    }
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    DeQue dq(5);
    dq.push_fornt(10);
    dq.push_rear(20);
    dq.push_fornt(30);
    dq.push_rear(40);
    dq.push_fornt(50);
    cout << "empty = " << dq.isEmpty() << endl;

    return 0;
}