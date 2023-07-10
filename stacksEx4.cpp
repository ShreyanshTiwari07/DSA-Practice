#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// smallest number on left solution
class Solution
{
public:
    vector<int> leftSmaller(int n, int arr[])
    {
        // code here
        vector<int> v;
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (st.size() == 0)
            {
                v.push_back(-1);
            }
            else if (st.size() > 0 && st.top() < arr[i])
            {
                v.push_back(st.top());
            }

            else if (st.size() > 0 && st.top() >= arr[i])
            {

                while (st.size() > 0 && st.top() >= arr[i])
                {
                    st.pop();
                }

                if (st.size() == 0)
                {
                    v.push_back(-1);
                }

                else
                {
                    v.push_back(st.top());
                }
            }
            st.push(arr[i]);
        }
        return v;
    }
};
int main()
{

    return 0;
}