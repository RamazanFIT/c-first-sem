#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, a;
    cin >> q >> a;
    int w[q][a];
    int x=0;
    
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<a;s++)
        {
            cin >> w[i][s];
        }
    }
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<a;s++)
        {
            x+=w[i][s];
        }
        cout << x/a <<" ";
        x=0;
    }
}