#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    int x;
    int y;
    cin >> q >> x >> y;
    int w[q];
   
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    swap(w[x-1], w[y-1]);
    for(int i=0;i<q;i++)
    {
        cout << w[i] <<" ";
    }
}