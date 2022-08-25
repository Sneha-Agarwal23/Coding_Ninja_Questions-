#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input)
{
    for(int i = 0; i < input.size(); i++)
    {
        for(int j = 1; j <= input.size() - i; j++)
        {
            cout<<input.substr(i, j)<<endl;
        }
    }
   
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}