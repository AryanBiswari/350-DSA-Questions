#include <bits/stdc++.h>
using namespace std;

int minMoves(vector<int> &nums)
{
    int sum = 0;
    int smallest = INT_MAX;
    for (auto ele : nums)
    {
        smallest = min(smallest, ele);
        sum += ele;
    }
    return (sum - nums.size() * smallest);
}

int main()
{
    vector<int> arr{1, 2, 3, 4};
    int ans = minMoves(arr);
    cout << ans << endl;
}