#include<bits/stdc++.h>
bool checkSubset(vector < int > & arr1, vector < int > & arr2, int n, int m)
{
    if(m > n)
        return false;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[arr1[i]]++;
    }
    for(int i = 0; i < m; i++)
    {
        mp[arr2[i]]--;
    }
    bool flag = true;
    for(int i = 0; i < m; i++)
    {
        if(mp[arr2[i]] < 0)
            flag = false;
    }
    return flag;
        
}