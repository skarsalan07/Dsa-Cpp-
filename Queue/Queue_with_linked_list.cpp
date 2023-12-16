#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
public:
    node *front = NULL;
    node *rear = NULL;

    void enqueu(int val, node *&head)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = newnode;
            front = newnode;
            rear = newnode;
            cout << "the added element is: " << rear->data << endl;

            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        rear = newnode;
        cout << "the added element is: " << rear->data << endl;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Dequeued element is : " << front->data << endl;
            front = front->next;
        }
    }

    void display(node *head)
    {
        node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    void isempty()
    {
        if (front == NULL)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
};

int main()
{
    node *head = NULL;
    queue obj;
    obj.isempty();
    obj.enqueu(1, head);
    obj.enqueu(2, head);
    obj.enqueu(3, head);
    obj.enqueu(4, head);
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();

    obj.display(head);
}