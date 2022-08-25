long long int sumOrProduct(long long int n, long long int q)
{
	long long mod = 1000000007;
    long long ans = 1;
    if(q == 1)
    {
        int sum = (n * (n+1)) / 2;
        return sum;
    }
    for(long long  i = 1; i <= n; i++)
    {
        ans = ans * i;
        ans = ans % mod;
    }
    return ans;
}