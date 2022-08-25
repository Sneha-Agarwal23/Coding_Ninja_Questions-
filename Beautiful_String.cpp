int makeBeautiful(string str)
{
    int n = str.size();
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(i%2 == 0)
        {
            if(str[i] == '1')
                count1++;
            else
                count2++;
        }
        if(i%2 != 0)
        {
            if(str[i] == '1')
                count2++;
            else
                count1++;
        }
    }
    return min(count1, count2);
    
}