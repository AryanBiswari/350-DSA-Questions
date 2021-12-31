#include<bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    long long int result = 0;
    while(x!=0)
    {
        result = result*10 + x%10;
        x /= 10;
        if(result > INT_MAX || result < INT_MIN)
        {
            return 0;
        }
    }
    return result;
}

int main()
{
    int x = 123;
    int ans = reverse(x);
    cout << ans << endl;

}