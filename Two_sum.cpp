#include<bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	unordered_map<int, int> m;
    vector<pair<int, int>> ans;
    for(int i = 0; i < n; i++)
    {
        int x = target - arr[i];
        if(m[x] > 0)
        {
            ans.push_back({x, arr[i]});
            m[x]--;
        }
        else
        {
            m[arr[i]]++;
        }
    }
    if(ans.size() == 0)
        ans.push_back({-1,-1});
    return ans;
}
