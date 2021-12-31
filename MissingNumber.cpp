#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int expected = n * (n + 1) / 2;
    int actual = 0;
    for (int num : nums)
    {
        actual += num;
    }
    return expected - actual;
}

int main()
{
    vector<int> arr{0, 1, 2};
    int ans = missingNumber(arr);
    cout << ans << endl;
}