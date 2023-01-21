#include <bits/stdc++.h>

using namespace std;


int lapata(int w[], int a)
{
    int z=0;
    for(int i=0;i<a/2;i++)
    {
        swap(w[i], w[a-1-z]);
        z++;
    }
}


int main()
{
    int q;
    cin >> q;
    int w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];

    }
    lapata(w, q);
    for(int i=0;i<q;i++)
    {
        cout << w[i] <<" ";
    }
}