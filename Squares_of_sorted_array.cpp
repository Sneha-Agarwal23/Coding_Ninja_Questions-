#include<bits/stdc++.h>
vector < int > sqsorted(vector < int > & arr)
{
    vector<int> ans;
    int i = 0;
    int j = arr.size()-1;
    while(i <= j)
    {
        int l = arr[i] * arr[i];
        int r = arr[j] * arr[j];
        if(l <= r)
        {
            ans.push_back(l);
            i++;
        }
        else
        {
            ans.push_back(r);
            j--;
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
    
}