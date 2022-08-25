#include<bits/stdc++.h>
void solve(int n, vector<vector<int>>& ans, int a, int b, int c)
{
    if(n == 0)
        return;
    
    solve(n-1, ans, a, c, b);
    ans.push_back({a,c});
    solve(n-1, ans, b, a, c);
}
vector<vector<int>> towerOfHanoi(int n)
{
    vector<vector<int>> ans;
    if(n == 0)
        return ans;
    solve(n, ans , 1, 2, 3);
    return ans;
}