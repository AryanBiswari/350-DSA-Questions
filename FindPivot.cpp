#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }

    int left_sum = 0;
    int right_sum = sum;
    for (int i = 0; i < nums.size(); i++)
    {
        right_sum = right_sum - nums[i];
        if (left_sum == right_sum)
        {
            return i;
        }
        left_sum += nums[i];
    }
    return -1;
}

int main()
{
    vector<int> arr{1, 7, 3, 6, 5, 6};
    int ans = pivotIndex(arr);
    cout << ans << endl;
}