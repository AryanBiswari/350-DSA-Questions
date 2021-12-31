#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int idx1 = m - 1;
    int idx2 = n - 1;
    int idx3 = m + n - 1;
    while (idx1 >= 0 && idx2 >= 0)
    {
        if (nums1[idx1] > nums2[idx2])
        {
            nums1[idx3] = nums1[idx1];
            idx1--;
            idx3--;
        }
        else
        {
            nums1[idx3] = nums2[idx2];
            idx2--;
            idx3--;
        }
    }
    while (idx1 >= 0)
    {
        nums1[idx3] = nums1[idx1];
        idx1--;
        idx3--;
    }
    while (idx2 >= 0)
    {
        nums1[idx3] = nums2[idx2];
        idx2--;
        idx3--;
    }
}

int main()
{
    vector<int> arr1{1};
    int len1 = 1, len2 = 0;
    vector<int> arr2{};
    merge(arr1, len1, arr2, len2);
    for(int i = 0;i<len1+len2;i++){
        cout << arr1[i]<<" ";
    }
}