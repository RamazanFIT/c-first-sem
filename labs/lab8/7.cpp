#include <bits/stdc++.h>

using namespace std;

int haha(int w[], int q, int x, int c)
{
     for(int i=0;i<q;i++)
     {
        if(i == x)
        {
            cout << c <<" ";
        }
        cout << w[i] <<" ";
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

    int z, x;
    cin >> z >> x;
    haha(w, q, z, x);
}