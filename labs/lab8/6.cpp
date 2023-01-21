#include <bits/stdc++.h>

using namespace std;

int func(int w[], int q, int z)
{
    sort(w, w+q);
    int k=0;
    for(int i = q-1;i>=q-z;i--)
    {
        k+=w[i];
    }
    return k;
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
    int t;
    cin >> t;
    cout << func(w, q, t );
}