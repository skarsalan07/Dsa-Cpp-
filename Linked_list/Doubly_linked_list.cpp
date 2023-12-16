#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void addattail(node *&head, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}
void addatbeg(node *&head, int val)
{
    node *newnode = new node(val);
    node *prevhead = head;
    head = newnode;
    newnode->next = prevhead;
}

void insertatposition(node *&head, int val)
{
    node *newnode = new node(val);
    int count = 1;
    int pos;
    cout << "enter Position you want to insert";
    cin >> pos;
    node *temp = head;
    while (temp->next != NULL)
    {

        if (pos == 1)
        {
            node *newnode = new node(val);
            node *prevhead = head;
            head = newnode;
            newnode->next = prevhead;
            return;
        }
        else if (count == pos)
        {
            node *prevnode = temp->next;
            temp->next = newnode;
            newnode->next = prevnode;
            return;
        }
        count++;
        temp = temp->next;
    }
    cout << endl
         << "Enter Correct Value" << endl;
}
void display(node *head)
{

    while (head != NULL)
    {
        cout << head->data << "-";
        head = head->next;
    }
}

void reverse(node *head)
{
    node *temp = head;
    int i = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->prev;
    }
}


void delete1(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *prev;
    prev = temp->prev;
    prev->next = NULL;
}
void deletefrombeg(node *&head)
{
    node *temp = head;
    node *prev;
    prev = temp->next;
    head = prev;
}

int main()
{
    node *head = NULL;
    addattail(head, 1);
    addattail(head, 2);
    addattail(head, 3);
    addattail(head, 4);
    addattail(head, 5);
    deletefrombeg(head);
    deletefrombeg(head);
    delete1(head);
    

    display(head);
}
