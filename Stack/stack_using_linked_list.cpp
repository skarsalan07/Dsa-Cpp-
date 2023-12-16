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

class stack
{
private:
    node *top;

public:
    stack()
    {
        top = NULL;
        cout << "the stack";
    }

    bool isempty()
    {
        return top == NULL;
    }
    void push(int val)
    {
        node *newnode = new node(val);
        newnode->next = top;
        top = newnode;
        cout << "Your element is push in stack which is : " << newnode->data << endl;
        return;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << endl
                 << "Stack Condition is underflow" << endl;
            return;
        }
        else
        {
            cout << endl
                 << "Popped element is : " << top->data;
            node *prev = top->next;
            top = prev;
        }
    }
    void display()
    {
        node *temp = top;
        while (temp != NULL)
        {
            cout << endl
                 << temp->data << "->";
            temp = temp->next;
        }
        return;
    }
    void peek()
    {
        cout << endl
             << "The peak element is : " << top->data;
    }
};

int main()
{
    stack obj;
    obj.push(1);
    obj.pop();
    obj.display();
}