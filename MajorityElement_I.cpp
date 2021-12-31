#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int ans_idx = 0;
    int count = 1;
    int n = nums.size();
    for(int i = 1; i < n; i++)
    {
        if(nums[i] == nums[ans_idx])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count == 0)
        {
            ans_idx = i;
            count = 1;
        }
    }
    return nums[ans_idx];
}


int main()
{
    vector<int>arr{1,1,1,4,4,4,4,2,4};
    int ans = majorityElement(arr);
    cout << ans << endl;
}