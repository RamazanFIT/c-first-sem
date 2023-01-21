#include <bits/stdc++.h>

using namespace std;

int jopa(int w[], int q, int a)
{
    for(int i=0;i<a;i++)
    {
        if(i != q)
        {
            cout <<w[i] <<" ";
        }
        else{
            continue;
        }
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

    jopa(w, a, q);
}