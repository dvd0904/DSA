#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, d;
    cin >> s >> d;
    stack<int> st;
    if (s > d * 9)
    {
        cout << -1;
        return 0;
    }
    if (d == 1 && s == 0)
        cout << 0;
    else
    {
        s--;
        while (d--)
        {
            if (s >= 9)
            {
                st.push(9);
                s -= 9;
            }
            else if (s > 0)
            {
                st.push(s);
                s = 0;
            }
            else
                st.push(0);
        }
        cout << st.top() + 1;
        st.pop();
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
    }
}