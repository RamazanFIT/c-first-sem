#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    int a;
    int z;
    cin >> q >> a >> z;
    int c=0;
    int w[10000];
    for(int i=q;i<=a;i++)
    {
        if(i == sqrt(i)*sqrt(i))
        {
            w[c] == i;
            c++;
        }
    }
    if(z == 1)
    {
        for(int i=0;i<c;i++)
        {
            cout << w[i] <<" ";
        }
        return 0;
    }
    else{
            for(int i=c-1;i>=0;i--)
        {
            cout << w[i] <<" ";
        }
        return 0;
    }
}