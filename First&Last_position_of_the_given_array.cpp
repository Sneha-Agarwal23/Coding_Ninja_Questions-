int firstocc(vector<int>& arr, int n, int k)
{
    int start = 0;
    int end = n-1;
    int mid;
    int x = -1;
    while(start <= end)
    {
        mid = (start + end)/2;
        if(arr[mid] == k)
        {
            x = mid;
            end = mid-1;
        }
        else if(arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return x;
}

int secondocc(vector<int>& arr, int n, int k)
{
    int start = 0;
    int end = n-1;
    int mid;
    int x = -1;
    while(start <= end)
    {
        mid = (start + end)/2;
        if(arr[mid] == k)
        {
            x = mid;
            start = mid + 1;
        }
        else if(arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return x;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    return {firstocc(arr, n, k), secondocc(arr, n, k)};
   
}