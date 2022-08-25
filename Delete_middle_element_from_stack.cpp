#include<bits/stdc++.h>
void solve(stack<int>&inputStack, int count, int N)
{
    int topelement = inputStack.top();
    inputStack.pop();
    if(count == N/2)
    {
        return;
    }
    solve(inputStack,count+1,N);
    inputStack.push(topelement);
}
void deleteMiddle(stack<int>&inputStack, int N)
{
	int count = 0;
    solve(inputStack, count, N);
}