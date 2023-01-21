#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, a, z;
    cin >> q >> a >> z;
    int w[1000];
    int c=0;
    for(int i=q;i<=a;i++)
    {
        if((int)(sqrt(i))* (int)(sqrt(i)) == i)
        {
            w[c] = i;
            c++;
        }
    }
    if(z == 1)
    {
        for(int i=0;i<c;i++)
        {
            cout << w[i] <<" ";
        }
    }
    else{
        for(int i=c-1;i>=0;i--)
        {
            cout << w[i] <<" ";
        }
    }
}