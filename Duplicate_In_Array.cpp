#include<bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    /*sort(arr.begin(), arr.end());        TLE
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == arr[i+1])
            return arr[i];
    }
    return -1;*/
    
    /*unordered_map<int, int> m;            TLE
    for(int i = 0; i < arr.size(); i++)
    {
        m[arr[i]]++;
    }
    for(auto i : m)
    {
        if(i.second > 1)
            return i.first;
    }
    return -1;*/
	
    
    int n = arr.size();
    int sum = 0;
    int totalsum = ((n-1) * n )/2;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum - totalsum;
}
