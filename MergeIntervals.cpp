#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> intervals{{2, 6}, {1, 3}, {15, 18}, {8, 10}};
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    ans.push_back(intervals[0]);
    int n = intervals.size();
    for (int i = 1; i < n; i++)
    {
        if (ans[ans.size() - 1][0] <= intervals[i][0] && ans[ans.size() - 1][1] >= intervals[i][1])
        {
            continue;
        }
        else if (ans[ans.size() - 1][1] >= intervals[i][0] && ans[ans.size() - 1][1] < intervals[i][1])
        {
            ans[ans.size() - 1][1] = intervals[i][1];
        }
        else
        {
            ans.push_back(intervals[i]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 2; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}