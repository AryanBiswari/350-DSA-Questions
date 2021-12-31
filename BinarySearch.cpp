#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{-1, 0, 3, 5, 9, 12};
    int target = 9;
    int ans = search(arr, target);
    cout << ans << endl;
}