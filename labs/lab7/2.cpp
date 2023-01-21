#include <bits/stdc++.h>

using namespace std;

int haha(int q)
{
    int w[100];
    int z=0;

    while(q>0)
    {
        w[z] = q % 2;
        q/=2;
        z++;
    }
    for(int i=z-1;i>=0;i--)
    {
        cout << w[i];
    }
}


int main()
{
    int q;
    cin >> q;
    haha(q);
}