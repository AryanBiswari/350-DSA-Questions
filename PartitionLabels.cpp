#include <bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string s)
{
    int lastIndex[26];
    for (int i = 0; i < s.size(); i++)
    {
        lastIndex[s[i] - 'a'] = i;
    }
    int j = 0, start = 0;
    vector<int> list;
    for (int i = 0; i < s.size(); i++)
    {
        j = max(j, lastIndex[s[i] - 'a']);
        if (i == j)
        {
            list.push_back(i - start + 1);
            start = i + 1;
        }
    }
    return list;
}

int main()
{
    string s = "eccbbbbdec";
    vector<int> ans = partitionLabels(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}