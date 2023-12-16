//  {1}// // Creation of linked list and adding value at the end of list
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// // <-Mrunal mam ko puchna hai !!!
// void insertattail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
// }
// int main()
// {
//     node *head = NULL;
//     for (int i = 0; i <= 100; i++)
//     {
//         insertattail(head,i);

//     }

//     display(head);
// }

// ----------------------------------------------------------------------------------------------------------------

// Creation of linked list and adding values by user and insert at head
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void addvaluebyuser(node *&head)
// {

//     int val;
//     cout << "Enter value you have to insert in linked list" << endl;
//     cin >> val;
//     node *x = new node(val);
//     if (head == NULL)
//     {
//         head = x;
//         return;
//     }
// node *temprary = head;
//     while (temprary->next != NULL)
//     {
//         temprary = temprary->next;
//     }
//     temprary->next = x;
// }

// void insertathead(node *&head, int val)
// {
//     node *newvalue = new node(val);
//     newvalue->next = head;
//     head = newvalue;
// }

// void Deletefromhead(node *&head)
// {
//     head = head->next;
// }
// void DeletefromEnd(node *&head)
// {

//     node *prev;
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         prev = temp;
//         temp = temp->next;
//     }
//     if (head->next == NULL)
//     {
//         head = NULL;
//     }
//     else
//     {

//         prev->next = NULL;
//         free(prev);
//     }
// }
// void display(node *head)
// {

//     while (head != NULL)
//     {
//         cout << head->data << "->";
//         head = head->next;
//     }
// }
// void getlength(node *head)
// {
//     int count = 0;
//     node *temp = head;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     cout << "The length is : " << count << endl;
// }

// void deletefromspecifiedposition(node *&head, int pos)
// {
//     node *prev;
//     node *temp = head;
//     int i = 1;
//     while (i < pos)
//     {
//         prev = temp;
//         temp = temp->next;
//         i++;
//     }
//     prev->next = temp->next;
// }
// int main()
// {
//     node *head = NULL;

//     int cond = 1;

//     do
//     {
//         addvaluebyuser(head);

//         cout << "You want to insert values in list press 1 0r 0" << endl;
//         cin >> cond;
//     } while (cond);
//     getlength(head);
//     display(head);
// }
#include <iostream>
using namespace std;
struct node
{

    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void addvalse(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *tempraray = head;
    while (tempraray->next != NULL)
    {
        tempraray = tempraray->next;
    }
    tempraray->next = n;
}
void display1(node *head)
{

    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
}

// void reverse12(node *head)
// {
//     node *previous;
//     node *current;
//     node *nextnode;
//     previous = NULL;
//     current = nextnode = head;

//     while (current!=NULL)
//     {
//         nextnode = current->next;
//         current->next = previous;
//         previous = current;
//         current = nextnode;
//     }
//     head = nextnode;
// }
void reverse(node *&head)
{
    
}
int main()
{
    node *head = NULL;

    addvalse(head, 1);
    addvalse(head, 2);
    addvalse(head, 3);
    addvalse(head, 4);
    addvalse(head, 5);
    addvalse(head, 6);
    addvalse(head, 7);
    addvalse(head, 8);
    addvalse(head, 9);
    addvalse(head, 10);
    addvalse(head, 11);
    // reverse12(head);
    display1(head);
}