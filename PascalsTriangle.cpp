#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> v(numRows);
    v[0].push_back(1);
    for (int i = 1; i < numRows; i++)
    {
        v[i].resize(i + 1);
        v[i][0] = 1;
        for (int j = 0; j < i / 2; j++)
        {
            int s = v[i - 1][j] + v[i - 1][j + 1];
            v[i][j + 1] = s;
            v[i][i - j - 1] = s;
        }
        v[i][i] = 1;
    }
    return v;
}

int main()
{
    int num = 5;
    vector<vector<int>> ans = generate(num);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }
}