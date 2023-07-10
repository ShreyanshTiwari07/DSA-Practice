#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to find the next greater element for each element of the array.
vector<long long> nextLargerElement(vector<long long> a, int n)
{
    stack<long long> s;
    vector<long long> ans;

    for (int i = n - 1; i >= 0; i--)
    {

        while (!s.empty() && a[i] >= s.top())
        {
            s.pop();
        }

        if (s.empty())
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(s.top());
        }

        s.push(a[i]);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{

    return 0;
}