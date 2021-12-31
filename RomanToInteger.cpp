#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    long long int sum = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if(s[i] == 'I' && s[i+1] == 'V')
        {
            sum += 4;
            i++;
        }
        else if(s[i] == 'I' && s[i+1] == 'X')
        {
            sum += 9;
            i++;
        }
        else if(s[i] == 'I' && s[i+1] != 'X' || s[i] == 'I' && s[i+1] != 'V' )
        {
            sum += 1;
        }
        else if(s[i] == 'X' && s[i+1] == 'L')
        {
            sum += 40;
            i++;
        }
        else if(s[i] == 'X' && s[i+1] == 'C')
        {
            sum += 90;
            i++;
        }
        else if(s[i] == 'X' && s[i+1] != 'C' || s[i] == 'X' && s[i+1] != 'L' )
        {
            sum += 10;
        }
        else if(s[i] == 'C' && s[i+1] == 'D')
        {
            sum += 400;
            i++;
        }
        else if(s[i] == 'C' && s[i+1] == 'M')
        {
            sum += 900;
            i++;
        }
        else if(s[i] == 'C' && s[i+1] != 'D' || s[i] == 'C' && s[i+1] != 'M' )
        {
            sum += 100;
        }
        else if(s[i] == 'M')
        {
            sum += 1000;
        }
        else if(s[i] == 'L')
        {
            sum += 50;
        }
        else if(s[i] == 'D')
        {
            sum += 500;
        }
        else if(s[i] == 'V')
        {
            sum += 5;
        }
    }
    return sum;
}

int main()
{
    string str = "MCMXCIV";
    int ans = romanToInt(str);
    cout << ans << endl;
}