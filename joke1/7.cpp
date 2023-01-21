#include <bits/stdc++.h>
using namespace std;
int w[1000];
int main()
{
    int q;
    cin >> q;
    int x;
    int c=-1111111;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        w[x]++;
       

    }
    for(int i=0;i<1000;i++)
    {
        if(c<=w[i])
        {
            c = w[i];
        }
    }
    for(int i=1000;i>=0;i--)
    {
        if(w[i] == c)
        {
            cout << i <<" ";
        }
    }
    
}