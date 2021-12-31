#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }
    int check = 0;
    while (x > check)
    {
        check = check * 10 + x % 10;
        x = x / 10;
    }
    return (x == check || x == check / 10) ? true : false;
}

int main()
{
    int num = 121;
    bool ans = isPalindrome(num);
    cout << ans << endl;
}