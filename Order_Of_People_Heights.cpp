#include<bits/stdc++.h>
vector<int> findOrder(vector<int> & height, vector<int> & infront)
{
    vector<int> ans;
    map<int, int> m;
    for(int i = 0; i < height.size(); i++)
    {
        m[height[i]] = infront[i];
    }
    for(auto it = m.rbegin(); it != m.rend(); it++)
    {
        ans.insert(ans.begin()+it->second, it->first);
    }
    return ans;
	
}