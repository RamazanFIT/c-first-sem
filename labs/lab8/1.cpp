#include <bits/stdc++.h>

using namespace std;

int w[1000];



int sortir(int q)
{
    int k;
    int c;
    for(int i=0;i<q;i++)
    {
        k = w[i];
        for(int s=i;s<q;s++)
        {
            if(k>=w[s])
            {
                k = w[s];
                c = s;
            }
        }
        w[c] = w[i];
        w[i] = k;
        
        
    }
}


int main()
{
    int q;
    cin >> q;
    
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
        
    }

    sortir(q);
    for(int i=0;i<q;i++)
    {
        cout << w[i] <<" ";
    }
}