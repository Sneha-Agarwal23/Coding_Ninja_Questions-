
string encode(string &message)
{
    int n = message.size();
    string ans;
    int count = 1;
    for(int i = 0; i < n; i++)
    {
        if(message[i] == message[i+1])
            count++;
        else
        {
            ans += message[i] + to_string(count);
            count = 1;
        }
    }
    return ans;
    
}