#include <bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid)
{
    int total = grid.size() * grid[0].size();
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if(grid[i][0] < 0)
            {
                i = grid.size();
                break;
            }
            if(grid[i][j] < 0)
            {
                break;
            }
            count++;
        }
        
    }
    return total - count;
    
}


int main()
{
    vector<vector<int> >matrix {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    int ans = countNegatives(matrix);
    cout << ans << endl;
}