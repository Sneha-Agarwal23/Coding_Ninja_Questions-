#include<bits/stdc++.h>
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    if(myStack.size() == 0)
        myStack.push(x);
    else
    {
        int temp = myStack.top();
        myStack.pop();
        pushAtBottom(myStack, x);
        myStack.push(temp);
    }
    return myStack;
        
        
}
