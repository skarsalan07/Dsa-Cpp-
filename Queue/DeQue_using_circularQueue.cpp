#include <iostream>
using namespace std;
#define size 5
class dequqe
{
public:
    int arr[size];
    int front = -1;
    int rear = -1;

    void enqueu_rear(int val)
    {
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = val;
            return;
        }
        else if ((rear + 1) % size == front)
        {
            arr[rear] = val;
            rear = (rear + 1) % size;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = val;
        }
    }

    void enqueue_front(int val)
    {
        front--;
        arr[front] = val;
    }
    void display()
    {
        int i = front;
        while (i != rear)
        {
            cout << arr[i];
            i = (i + 1) % size;
        }
        cout << arr[i];
    }
    void dequeu()
    {
        front = (front + 1) % size;
    }
};
int main()
{
    dequqe obj;
    obj.enqueu_rear(1);
    obj.enqueu_rear(2);
    obj.enqueu_rear(3);
    obj.enqueu_rear(4);
    obj.enqueue_front(1);   
    obj.display();
}