#include<bits/stdc++.h>
int minimumParentheses(string pattern) 
{
    int close = 0;
    int open = 0;
    int n = pattern.length();
    for(int i = 0; i < n; i++)
    {
        if(pattern[i] == '(')
            open++;
        else if(open > 0)
            open--;
        else
            close++;
    }
    return open + close;
}