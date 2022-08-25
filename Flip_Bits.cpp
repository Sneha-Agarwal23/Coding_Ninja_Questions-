int flipBits(int* arr, int n) 
{
    int zero = 0;
    int one = 0;
    int maxcount = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
            zero++;
        else
        {
            one++;
            zero--;
        }
        maxcount = max(maxcount, zero);
        if(zero < 0)
            zero = 0;
    }
    return maxcount + one;
}