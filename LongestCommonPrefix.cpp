#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int len = strs.size();
    if (len == 0)
        return "";

    string ans = "";
    sort(begin(strs), end(strs));
    string a = strs[0];
    string b = strs[len - 1];

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            ans = ans + a[i];
        }
        else
        {
            break;
        }
    }

    return ans;
}

int main()
{
    vector<string> str{"flower","flow","flight"};
    string ans = longestCommonPrefix(str);
    cout << ans << endl;
}