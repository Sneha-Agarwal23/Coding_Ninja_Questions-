#include<bits/stdc++.h>
void setMatrixOnes(vector<vector<int>> &MAT, int n, int m)
{
    bool check = false;
    for(int i = 0; i < n; i++)
    {
        if(MAT[i][0] == 1)
            check = true;
        for(int j = 1; j < m; j++)
        {
            if(MAT[i][j] == 1)
            {
                MAT[i][0] = MAT[0][j] = 1;
            }
        }
    }
    for(int i = n-1; i >= 0; i--)
    {
        for(int j = m-1; j >= 1; j--)
        {
            if(MAT[i][0] == 1 || MAT[0][j] == 1)
                MAT[i][j] = 1;
        }
        if(check == true)
            MAT[i][0] = 1;
    }
    
}