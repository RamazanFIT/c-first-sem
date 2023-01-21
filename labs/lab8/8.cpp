#include <bits/stdc++.h>

using namespace std;

int prime(int q)
{
    bool kaka = false;
    for(int i=2;i<q;i++)
    {
        if(q%i==0)
        kaka = true;
    }
    if(kaka == true)
    {
        return 0;
    }
    else{
        return 1;
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
    int a;
    cin >> a;
    int j[q];
    int z=0;
    for(int i=0;i<q;i++)
    {
        if(w[i] >= a)
        {
            j[z] = w[i];
            z++;
        }
    }
    int b=0;

    for(int i=0;i<z;i++)
    {
        b+=prime(j[i]);
    }
    cout << b;
}