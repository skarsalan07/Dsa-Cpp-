#include <iostream>
using namespace std;
#define size 5
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

    void enqueu(int val)
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty now" << endl;
            rear = 0;
            front = 0;
            que[rear] = val;
        }
        else if ((rear + 1) % size == front)
        {
            cout << "Queue is full" << endl;
        }
        else if ((rear + 1) % size != front)
        {
            rear = (rear + 1) % size;
            que[rear] = val;
        }
    }
    void deque()
    {
        if (rear == -1 && front == -1)
        {
            cout << "Queue is empty";
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }
    void display()
    {

        if (rear == -1 && front == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            int i = front;

            while (i != rear)
            {
                cout << que[i] << endl;
                i = (i + 1) % size;
            }
            cout << que[rear] << endl;
        }
    }
};
int main()
{
    queue obj;
    obj.enqueu(1);
    obj.enqueu(2);
    obj.enqueu(3);
    obj.enqueu(4);
    obj.deque();
    obj.enqueu(5);
    obj.enqueu(6);
    obj.display();
}
