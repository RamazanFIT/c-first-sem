#include <bits/stdc++.h>

using namespace std;


int lapata(int w[], int a, int x, int y)
{
    int z=0;
    for(int i=x;i<=(x+y)/2;i++)
    {
        swap(w[i], w[y-z]);
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
    int a, b;
    cin >> a >> b;

    lapata(w, q, a , b);
    for(int i=0;i<q;i++)
    {
        cout << w[i] <<" ";
    }
}