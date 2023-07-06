// question link: https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa19HYWh0Tmw1X2JkVWg3TUdKeE1NaENralduUXxBQ3Jtc0trcURpVE9jWi1xUGc3ZS1XS1FjSE1XYm5Gcy00TnB6RlVsdExRNWFLd0xjYUhpd081QzhYTXY0WEk3cW4zcHAyUXBaeDFNTXR3ZW1DTTNMOUNvNlQyQlFuYVROaV9GTE4xWDlJUm9tTzJRS29LcWlVVQ&q=https%3A%2F%2Fbit.ly%2F3gr4wW8&v=_6COl6V6mng

#include <bits/stdc++.h>
class TwoStack
{

public:
    int *arr;
    int top1;
    int top2;
    int size;

    // Initialize TwoStack.
    TwoStack(int s)
    {
        // Write your code here.
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // Push in stack 1.
    void push1(int num)
    {
        // Write your code here.
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
        }

    // Push in stack 2.
    void push2(int num)
    {
        // Write your code here.
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        // Write your code here.
        if (top1 > -1)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        // Write your code here.
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};
