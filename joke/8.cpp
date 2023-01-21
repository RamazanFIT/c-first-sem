#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int w[q][q];
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            cin >> w[i][s];
        }
    }
    int ww[q*q];
    for(int i=0;i<q;i++)
    {   
        ww[i] = w[i][0];
        for(int s=0;s<q;s++)
        {
            if(ww[i] <=w[i][s])
            {
                ww[i] = w[i][s];
            }
        }

    }
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            cout << ww[i] <<" ";
        }
        cout << endl;
    }
    for(int i=0;i<q;i++)
    {
        
    }
}