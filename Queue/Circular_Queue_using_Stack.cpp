#include <iostream>
using namespace std;
#define size 10
class stack
{
public:
    int stack1[size];
    int stack2[size];

    int top = -1;
    int count = 0;

    void enqueue(int val)
    {
        top++;
        stack1[top] = val;
        count++;
    }
    void dequeue()
    {
        for (int i = 0; i < count; i++)
        {
            stack2[i] = stack1[i];
        }
        stack2[top] = 0;
        cout << stack2[top] << endl;
        count--;
        for (int i = 0; i < count; i++)
        {
            stack1[i] = stack2[i];
        }
    }
    void display()
    {
        for (int i = 0; i < count; i++)
        {
            cout << stack1[i];
        }
    }
};
int main()
{
    stack obj;
    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);
    obj.enqueue(4);
    obj.enqueue(5);
    obj.enqueue(6);
    obj.enqueue(7);
    obj.enqueue(8);
    obj.enqueue(9);
    obj.enqueue(10);
    obj.dequeue();
    obj.display();
}