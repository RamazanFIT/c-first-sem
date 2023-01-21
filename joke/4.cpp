#include <bits/stdc++.h>

using namespace std;
int w[1005];
int main()
{
    int q;
    cin >> q;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        w[x]++;
    }
    int k=0;
    for(int i=0;i<1005;i++)
    {
        k = max(k,w[i]);
    }
    int l[1000];
    int z=0;
    for(int i=0;i<1005;i++)
    {
        if(w[i] == k)
        {
            l[z] = i;
            z++;

        }
    }
    sort(l, l+z);
    for(int i=z-1;i>=0;i--)
    {
        cout << l[i] <<" ";
    }
    
}