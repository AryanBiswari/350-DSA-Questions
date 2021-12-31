#include<bits/stdc++.h>
using namespace std;


string convertToTitle(int n)
{
    string res = "";
    while (n)
    {
        char ch = 'A' + (n-1)%26;
        res = ch + res;
        n = (n-1)/26;
    }
    return res;
}

int main()
{
    int num = 28;
    string ans = convertToTitle(num);
    cout << ans << endl;
}