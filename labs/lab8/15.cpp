#include <bits/stdc++.h>

using namespace std;

int haha(int w[], int q)
{
    int z=0;
    sort(w, w+q);
    for(int i=0;i<q-1;i++)
    {
        if(w[i] != w[i+1])
        {
            
            z++;
        }
    }
    return (z+1);
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
    cout << haha(w, q);
}