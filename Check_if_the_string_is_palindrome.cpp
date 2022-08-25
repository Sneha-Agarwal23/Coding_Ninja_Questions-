bool checkPalindrome(string s)
{
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    int start = 0;
    int end = n-1;
    while(start < end)
    {
        if(!(s[start] >= 'a' && s[start] <= 'z') && !(s[start] >= '0' && s[start] <= '9'))
            start++;
        
        else if(!(s[end] >= 'a' && s[end] <= 'z') && !(s[end] >= '0' && s[end] <= '9'))
            end--;
        
        else if(s[start] != s[end])
            return false;
        else
        {
            start++;
            end--;
        }
    }
    return true;
}