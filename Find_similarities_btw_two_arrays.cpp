#include<bits/stdc++.h>
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
    int count = 0;
	unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[arr1[i]]++;
    }
    for(int i = 0; i < m; i++)
    {
        mp[arr2[i]]++;
    }
    for(auto i : mp)
    {
        if(i.second == 2)
            count++;
    }
    return {count, mp.size()};
}