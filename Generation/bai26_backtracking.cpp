#include <bits/stdc++.h>
using namespace std;
char c;
vector<string> V1 = {"_", "A", "B", "C", "D", "E", "F", "G", "H"};
bool used[100];
int n;
string res;

bool check(string s)
{
    int len = s.length();
    if (len == 4)
    {
        if (s[0] == 'A' || s[len - 1] == 'A')
            return 1;
        return 0;
    }
    string tmp3 = s.substr(0, 1) + s.substr(len - 1, 1);
    string tmp1 = "AE", tmp2 = "EA";
    if (s.find(tmp1) != string ::npos)
        return 1;
    if (s.find(tmp2) != string ::npos)
        return 1;
    if (tmp3 == "AE" || tmp3 == "EA")
        return 1;
    return 0;
}

void Try()
{
    for (char j = 'A'; j <= c; j++)
    {
        if (used[j] == false)
        {
            res += j;
            used[j] = true;
            if (res.size() == n)
            {
                if (check(res))
                    cout << res << endl;
            }
            else
                Try();
            res.pop_back();
            used[j] = false;
        }
    }
}

int main()
{
    memset(used, false, sizeof(used));
    cin >> c;
    n = c - 'A' + 1;
    Try();
}