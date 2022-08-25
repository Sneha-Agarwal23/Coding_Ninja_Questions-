#include<bits/stdc++.h>
unordered_map<string, int> m;
class myHashMap 
{
    public:
    myHashMap() 
    {
        // Write your code here.
    }

    void insert(string key, int value) 
    {
        if(m.find(key) != m.end())
            m[key] = value;
        else
            m.insert({key, value});
    }

    bool search(string key) 
    {
        if(m.find(key) != m.end())
            return true;
        return false;
    }

    int get(string key) 
    {
        if(m.find(key) != m.end())
            return m[key];
        return -1;
    }

    void remove(string key) 
    {
        if(m.find(key) != m.end())
            m.erase(key);
    }

    int getSize() 
    {
        return m.size();
    }

    bool isEmpty() 
    { 
        return m.empty();
    }
};
