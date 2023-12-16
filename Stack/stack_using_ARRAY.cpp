#include <iostream>
using namespace std;
#define size 10
class stack
{
private:
    int arr[size];
    int top = -1;

public:
    void push(int val)
    {
        if (top + 1 < size)
        {
            top++;
            arr[top] = val;
            cout << arr[top] << endl;
        }
        else
        {
            cout << "Stack Overflow" << endl;
            return;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << endl
                 << "Condition is Underflow";
        }
        else
        {

            cout << endl
                 << "Popped element is : " << arr[top];
            top--;
        }
    }
    void peek()
    {
        if (top == -1)
        {
            cout << endl
                 << "There is no peek element in Stack";
        }
        else
        {
            cout << endl
                 << "Peek element in the stack is : "
                 << arr[top];
        }
    }
    void isempty()
    {
        if (top == -1)
        {
            cout << "TRUE";
            return;
        }
        {
            cout << "FALSE";
            return;
        }
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << endl
                 << arr[i];
        }
    }
    void max()
    {
        for (int i = 0; i < size; i++)
        {
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << endl;
            }
        }
    }
};
int main()
{
    stack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    obj.pop();
    obj.peek();
    obj.isempty();
    obj.display();
}