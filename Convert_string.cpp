#include<bits/stdc++.h>
string convertString(string s) 
{
    int n = s.length();
	for(int i = 0; i < n; i++)
    {
       if(s[i] >= 'a' && s[i] <= 'z')
           s[i] -= 32;
        
        while(i < n && s[i] != ' ')
        {
            i++;
        }
    }
    return s;
}