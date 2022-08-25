#include<bits/stdc++.h>
string removeDuplicate(string &s)
{
    int n = s.length();
    string ans = "";
    int i = 0, j = 1;
    while(i < n)
    {
        if(s[i] == s[j])
            j++;
        else
        {
            ans.push_back(s[i]);
            i = j;
            j++;
        }
    }
    return ans;
}
