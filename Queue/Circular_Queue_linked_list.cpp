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
void enqueu(node *&head, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
}
void dequeue(node *&head)
{
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *pre = head->next;
    head = pre;
    temp->next = head;
    if (head->next == head)
    {
        head = NULL;
    }
}

void display(node *head)
{
    node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << "->";
}

void peek(node *head)
{
    cout << "Your peek element is : " << head->data << endl;
    return;
}

int main()
{
    node *head = NULL;
    enqueu(head, 1);
    enqueu(head, 2);
    enqueu(head, 3);
    dequeue(head);
    dequeue(head);
    peek(head);
    display(head);
}