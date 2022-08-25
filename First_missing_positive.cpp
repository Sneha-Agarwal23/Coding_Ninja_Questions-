#include<bits/stdc++.h>
int firstMissing(int arr[], int n)
{
    if(n == 0)
        return 1;
    sort(arr, arr+n);
    int x = 1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
            x++;
        if(arr[i] < x)
            continue;
        else
            break;
    }
    return x;
}