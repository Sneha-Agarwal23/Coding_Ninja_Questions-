#include<bits/stdc++.h>
class comp{
    public:
    bool operator()(pair<int, string>&a, pair<int, string>&b)
    {
       if(a.first == b.first)
           return a.second < b.second;
        return a.first > b.first;
    }
};
vector<string> kMostFreqWords(string words[], int n, int k)
{
    unordered_map<string, int> m;
    for(int i = 0; i < n; i++)
    {
        m[words[i]]++;
    }
    priority_queue<pair<int, string>, vector<pair<int, string>>, comp> pq;
    for(auto i : m)
    {
        pq.push({i.second, i.first});
        if(pq.size() > k)
            pq.pop();
    }
    vector<string> ans(k);
    int x = k-1;
    while(pq.size() > 0)
    {
        ans[x] = pq.top().second;
        x--;
        pq.pop();
    }
    return ans;
} 