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
void add(node *&head, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        newnode->next = newnode;
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
void display(node *head)
{

    node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << "->";
    return;
}

void addbeg(node *&head, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        newnode->next = newnode;
        return;
    }
    node *tail = head;
    node *temp = head;
    while (tail->next != head)
    {
        tail = tail->next;
    }
    node *prevhead = head;
    head = newnode;
    newnode->next = prevhead;
    tail->next = head;
}
void deletebeg(node *&head)
{
    node *temp = head;
    node *del = head->next;

    if (head->next == head)
    {
        head->next = NULL;
        head = NULL;
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = del;
    head = del;
}
void delend(node *&head)
{
    node *current = head;
    node *prev = head;
    if (current->next == head)
    {
        current->next = NULL;
        head = NULL;

        return;
    }
    while (current->next != head)
    {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
}

void reverse(node *&head)
{
    node *prev;
    node *current;
    node *nextnode;

    current = head;
    nextnode = head->next;

    while (current != head)
    {
        prev = current;
        current = nextnode;
        nextnode = current->next;
        current->next = prev;
    }
    nextnode = head;
    nextnode->next = head;
}
// void reverse(node *&head)
// {
//     node *prev;
//     node *current;
//     node *nextnode;

//     current = head;
//     nextnode = head->next;

//     while (current != head)
//     {
//         prev = current;
//         current = nextnode;
//         nextnode = current->next;
//         current->next = prev;
//     }
//     nextnode = head;
//     nextnode->next = head;
// }
int main()
{
    node *head = NULL;

    add(head, 1);
    add(head, 2);
    add(head, 3);
    add(head, 4);
    reverse(head);

    display(head);
}