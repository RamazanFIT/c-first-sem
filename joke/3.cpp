#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int c =0;
    int z=0;
    int w[q], j[q];
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        if(x%2==0)
        {
            w[z] = x;
            z++;
        }
        else{
            j[c] = x;
            c++;
        }
    }
    for(int i=0;i<z;i++)
    {
        cout << w[i] <<" ";
    }
    for(int i=0;i<c;i++)
    {
        cout << j[i] << " ";
    }

}