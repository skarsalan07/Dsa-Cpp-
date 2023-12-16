#include <iostream>
using namespace std;
#define size 10
class queue
{
public:
    int *que;
    int front;
    int rear;

    queue()
    {
        que = new int[size];
        front = -1;
        rear = -1;
    }

    void enque(int val)
    {
        if (rear == size - 1)
        {
            cout << "Queue is overflow" << endl;
        }
        else
        {
            rear++;
            que[rear] = val;
            cout << que[rear] << endl;

            if (front == -1)
            {
                front++;
            }
        }
    }
    void dequeu()
    {
        if (front == -1)
        {
            cout << "No element to dequeue" << endl;
            return;
        }
        front++;
    }

    void display()
    {
        if (front == -1)
        {
            cout << "There is no element in the queue" << endl;
        }
        else
        {
            for (front; front <= rear; front++)
            {
                cout << que[front] << endl;
            }
        }
    }
    void peek()
    {
        if (front == -1)
        {
            cout << "There is no element at peak" << endl;
        }
        else
        {
            cout << "Peek element in the queue is: " << que[front] << endl;
        }
    }
    void isempty()
    {
        if (front == -1 && rear == -1)
        {
            cout << "TRUE" << endl;
        }
        else
        {
            cout << "FALSE" << endl;
        }
    }
    void FULL()
    {
        if (rear == size - 1)
        {
            cout << "The queue is full" << endl;
        }
    }
};
int main()
{
    queue object;
    object.enque(1);
    object.enque(2);
    object.enque(3);
    object.enque(4);
    object.enque(5);
    object.enque(6);
    object.enque(7);
    object.enque(8);
    object.enque(9);
    // object.enque(10);
    object.dequeu();
    object.dequeu();
    object.dequeu();
    object.peek();
    object.isempty();
    object.FULL();
    object.display();
}