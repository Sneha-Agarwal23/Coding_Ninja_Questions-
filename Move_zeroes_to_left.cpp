#include<bits/stdc++.h>
void moveZerosToLeft(int *arr, int n) 
{
    int i = n-1;
    int j = n-1;
    while(i >= 0)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j--;
        }
        i--;
    }

}
