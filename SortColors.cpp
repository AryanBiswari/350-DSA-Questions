#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1, mid = 0;
    while (mid <= end)
    {
        if (nums[mid] == 0)
        {
            swap(nums[start], nums[mid]);
            start++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[end]);
            end--;
        }
    }
}

int main()
{
    vector<int> arr{2, 0, 2, 1, 1, 0};
    sortColors(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " , ";
    }
}