#include <bits/stdc++.h>

using namespace std;

int fgcd(int q, int a)
{
    if(q == a) return q;
    int k;
    if(q>a)
    {
        k=q-a;
        q = a;
        return(fgcd(q, a));
    }
    if(a>q)
    {
        k = a-q;
        a = k;
        return(fgcd(q, a));
        return k;
       
        
    }
    

}



int main()
{
    int q;
    cin >> q;
    int w[q];
    int k=0;

    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    for(int i=0;i<q;i++)
    {
        for(int s=i+1;s<=q;s++)
        {
            k = max(k, fgcd(w[i], w[s]));
        }
    }
    cout << k;

}