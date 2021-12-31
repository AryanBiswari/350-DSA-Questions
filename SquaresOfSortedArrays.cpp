#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    vector<int> res(nums.size());
    int left = 0, right = nums.size() - 1;
    for (int k = nums.size() - 1; k >= 0; k--)
    {
        if (abs(nums[right]) > abs(nums[left]))
        {
            res[k] = nums[right] * nums[right];
            right--;
        }
        else
        {
            res[k] = nums[left] * nums[left];
            left++;
        }
    }
    return res;
}

int main()
{
    vector<int> arr{-4, -1, 0, 3, 10};
    vector<int> ans = sortedSquares(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}