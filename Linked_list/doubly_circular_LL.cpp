// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//         prev = NULL;
//     }
// };
// void add(node *&head, int val)
// {
//     node *newnode = new node(val);
//     node *tail;
//     if (head == NULL)
//     {
//         head = newnode;
//         head->next = newnode;
//         head->prev = newnode;
//         tail = newnode;
//         return;
//     }
//     tail->next = newnode;
//     newnode->prev = tail;
//     newnode->next = head;
//     head->prev = newnode;
//     tail = newnode;
// }

// void display(node *head)
// {
//     node *temp = head;
//     if (head == NULL)
//     {
//         cout << "no atoms for display";
//         return;
//     }
//     while (temp->next != head)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << temp->data;
// }
// void addatbeg(node *&head, int val)
// {
//     node *newnode = new node(val);
//     node *prev = head;
// }
// int main()
// {
//     node *head = NULL;
//     add(head, 1);
//     add(head, 2);
//     add(head, 3);
//     add(head, 4);
//     add(head,5);
//     // addatbeg(head,2);

//     display(head);
// }
