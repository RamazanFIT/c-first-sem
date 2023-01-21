#include <bits/stdc++.h>
using namespace std;


int main()
{
    int q;
    cin >> q;
    char w[q][q];
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            cin >> w[i][s];
            if(w[i][s] == '*')
            {
                w[i][s] = 0;
            }
            else{
                w[i][s] = 1;
            }
        }
    }
    for(int i=1;i<q-1;i++)
    {
        for(int s=1;s<q-1;s++)
        {
            if(w[i][s] == 1 || w[i][s+1] = 1 || w[i+1][s] == 1)
            {
                c++;
            }
        }
    }
}