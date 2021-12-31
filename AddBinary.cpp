#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    string ans = "";
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry == 1)
    {
        carry += i >= 0 ? a[i--] - '0' : 0;
        carry += j >= 0 ? b[j--] - '0' : 0;
        ans = char(carry % 2 + '0') + ans;
        carry /= 2;
    }
    return ans;
}

int main()
{
    string first = "111";
    string second = "101";
    string ans = addBinary(first, second);
    cout << ans << endl;
}