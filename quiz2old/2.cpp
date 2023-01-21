#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int q;
    cin >> q;
    int x;
    int z=0, c=0;
    int ww[q];
    int j[q];
    for(int i=0;i<q;i++ )
    {
        cin >> x;
        if(x%2 == 0)
        {
            j[z] = x;
            z++;
        }
        if(x%2 != 0)
        {
            ww[c] = x;
            c++;
        }

    }
    sort(ww, ww+c);
    sort(j, j+z);
    int v=0;
    for(int i=0;i<z/2;i++)
    {
        swap(j[i], j[z-1-v]);
        v++;
    }
    for(int i=0;i<z;i++)
    {
        cout << j[i] <<" ";
    }
    for(int i=0;i<c;i++)
    {
        cout << ww[i] <<" ";
    }
}