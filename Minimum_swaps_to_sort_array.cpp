#include<bits/stdc++.h>
int minSwaps(vector<int> &arr)
{
	int count = 0;
    int n = arr.size();
    for(int i = 0; i < n-1; i++)
    {
        int mini = arr[i];
        int minindex;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < mini)
            {
                mini = arr[j];
                minindex = j;
            }
        }
        if(mini < arr[i])
        {
            swap(arr[i], arr[minindex]);
            count++;
        }
    }
    return count;
}