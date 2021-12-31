#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    for (int i = 1; i <= nums.size() - 1; i++)
    {
        nums[i] = nums[i] + nums[i - 1];
    }
    return nums;
}

int main()
{
    vector<int> arr{1, 2, 3, 4};
    vector<int> ans = runningSum(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}