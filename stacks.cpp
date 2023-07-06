#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int _size)
    {
        this->size = _size;
        arr = new int[_size];
        top = -1;
    };

    void push(int value)
    {
        if (size - top >= 1)
        {
            top++;
            arr[top] = value;
        }
        else
        {
            cout << "Stack Overflow";
        }
    };

    void pop()
    {
        if (top > -1)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow";
        }
    };

    int peek()
    {
        if (top > -1)
        {
            return arr[top];
        }
    };

    void isEmpty()
    {
        if (top == -1)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
};

int main()
{
    Stack arr(5);
    arr.push(2);
    arr.push(5);
    arr.push(15);
    cout << arr.top << endl;
    arr.isEmpty();

    return 0;
}