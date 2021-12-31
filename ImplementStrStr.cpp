#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    if(needle.size()==0) return 0;
    int flag;
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle[0])
        {
            flag = 0;
            for (int j = 0; j < needle.size(); j++)
            {
                if (haystack[i + j] != needle[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    string haystack = "hello";
    string needle = "la";
    int ans = strStr(haystack, needle);
    cout << ans << endl;
}