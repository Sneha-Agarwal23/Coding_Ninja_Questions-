#include<bits/stdc++.h>
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    unordered_map<int, int> m;
    vector<int> ans;
    int n = arr.size();
    for(int i = 0; i < k; i++)
    {
         m[arr[i]]++;
    }
    ans.push_back(m.size());
    for(int i = k; i < n; i++)
    {
        m[arr[i-k]]--;
        if(m[arr[i-k]] == 0)
            m.erase(arr[i-k]);
        m[arr[i]]++;
        ans.push_back(m.size());
    }
    return ans;
}
