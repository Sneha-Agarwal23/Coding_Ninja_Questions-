#include<bits/stdc++.h>

bool checkPalindrome(long long N)
{
	string s = "";
    while(N != 0)
    {
        int r = N % 2;
        s.push_back(r);
        N = N/2;
    }
    int i = 0, j = s.length() - 1;
    while(i < j)
    {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}