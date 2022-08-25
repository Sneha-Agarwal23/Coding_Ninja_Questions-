#include<bits/stdc++.h>
int sqrtN(long long int N)
{
    int start = 0;
    int end = 1e+16;
    long long int mid = start + (end - start)/2;
    while(start <= end)
    {
        if(N == 1ll*mid * mid)
            return mid;
        else if(N < 1ll*mid*mid)
            end = mid - 1;
        else
            start = mid + 1;
        
        mid = start + (end - start)/2;
    }
    return end;
}