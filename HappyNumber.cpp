#include <bits/stdc++.h>
using namespace std;

int digitSqrSum(int digit)
{
    int sum = 0;
    while(digit > 0)
    {
        sum += ((digit%10) * (digit%10));
        digit /= 10;
    }
    return sum;
}


bool isHappy(int n)
{
    int temp = n;
    while (true)
    {
        if(temp == 89)
        {
            return false;
        }
        if(temp == 1)
        {
            return true;
        }
        temp = digitSqrSum(temp);
    }
    
}

int main()
{
    int n = 89;
    int ans = isHappy(n);
    cout << ans << endl;
}