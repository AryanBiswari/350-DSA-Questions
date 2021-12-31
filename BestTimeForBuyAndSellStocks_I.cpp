#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int leastPrice = INT_MAX;
    int profitIfSoldToday = 0;
    int overallProfit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < leastPrice)
        {
            leastPrice = prices[i];
        }
        profitIfSoldToday = prices[i] - leastPrice;
        if (profitIfSoldToday > overallProfit)
        {
            overallProfit = profitIfSoldToday;
        }
    }
    return overallProfit;
}

int main()
{
    vector<int> price{7, 6, 4, 3, 1};
    int ans = maxProfit(price);
    cout << ans << endl;
}