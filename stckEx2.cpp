#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // reversing a string using stack
    string s = "shreyansh";
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    };
    string ans = "";
    while (!st.empty())
    {
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout << "The reversed string is" << ans << endl;

    return 0;
}