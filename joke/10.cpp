#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string x;
    string w[q];
    int z=0;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        for(int i=0;i<x.size();i++)
        {
            if(x[i] !='0')
            {
                w[i][z] = x[i];
                z++;
            }
        }
        z=0;
    }
    int v=0;
    
    for(int i=0;i<q/2;i++)
    {
        for(int s=0;s<2;s++)
        {
        if(w[q-1-v].find(w[i][s] == -1))
        {
            cout <<"NO";
            return 0;
        }
        v++;
    }}
    cout <<"YES";


    
    
}