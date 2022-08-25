vector<string> printPatt(int n)
{
    vector<string> v;
    for(int i = 1; i <= n; i++)
    {
        string temp = "";
        temp.append(n-i+1, '*');
        v.push_back(temp);
    }
    return v;
}
