#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int buyDate = 0, sellDate = 0, profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] >= prices[i - 1])
        {
            sellDate++;
        }
        else
        {
            profit += prices[sellDate] - prices[buyDate];
            buyDate = sellDate = i;
        }
    }
    profit += prices[sellDate] - prices[buyDate];
    return profit;
}

int main()
{
    vector<int> arr{7, 6, 4, 3, 1};
    int ans = maxProfit(arr);
    cout << ans << endl;
}