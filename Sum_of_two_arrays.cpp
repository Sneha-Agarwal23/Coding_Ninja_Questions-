#include<bits/stdc++.h>
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) 
{
    long long int num1 = 0;
    long long int num2 = 0;
	for(int i = 0; i < n; i++)
    {
        num1 = num1 * 10 + a[i];
    }
    for(int i = 0; i < m; i++)
    {
        num2 = num2 * 10 + b[i];
    }
    long long int ans = num1 + num2;
    vector<int> result;
    while(ans != 0)
    {
        int r = ans % 10;
        result.push_back(r);
        ans = ans / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}