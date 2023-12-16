#include <iostream>
using namespace std;
class stack
{
public:
    int stack[10];
    int top = -1;

    void push(int val)
    {
        if (top == 10)
        {
            cout << "Stack overflow";
            return;
        }

        top++;
        stack[top] = val;
    }
    void display()
    {
        for (int i = 0; i < top; i++)
        {
            cout << stack[i] << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Condition is Underflow" << endl;
        }
        else
        {
            cout << "This is the popped element" << stack[top] << endl;
            top--;
        }
    }
    void peek()
    {
        cout << "This is peek element in the stack:-" << stack[top] << endl;
    }
};
int main()
{

    stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    a.push(7);
    a.push(8);
    a.push(9);
    a.push(10);
    a.push(11);
    a.push(12);

    a.display();
}