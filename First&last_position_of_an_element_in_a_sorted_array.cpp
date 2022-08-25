#include<bits/stdc++.h>
int foc(vector<int> &arr, int n, int x)
{
    int start = 0;
    int end = n-1;
    int f = -1;
    while(start <= end)
    {
        int mid = (start + end)/2;
        if(arr[mid] == x)
        {
            f = mid;
            end = mid-1;
        }
        else if(arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
        
    }
    return f;
}
int loc(vector<int> &arr, int n, int x)
{
    int start = 0;
    int end = n-1;
    int l = -1;
    while(start <= end)
    {
        int mid = (start + end)/2;
        if(arr[mid] == x)
        {
            l = mid;
            start = mid + 1;
        }
        else if(arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
        
    }
    return l;
}
pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	pair<int, int> p;
    p.first = foc(arr, n, x);
    p.second = loc(arr, n, x);
    return p;
}

