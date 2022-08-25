#include<bits/stdc++.h>
long long minPenalty( vector<int> & arr)
{
    int n = arr.size();
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    long long ans = 0;
    while(pq.size() != 1)
    {
        long long x = pq.top();
        pq.pop();
        long long y = pq.top();
        pq.pop();
        ans += x + y;
        pq.push(x+y);
    }
    return ans;
	 
}
