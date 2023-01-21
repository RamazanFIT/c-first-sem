#include <bits/stdc++.h>

using namespace std;

int w[10000];
int j[10000];

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
    for(int i=0;i<q;i++)
    {
        cin >> x;
        j[x]++;
    } 
    int y=0;
    for(int i=0;i<1000;i++)
    {
        y+=min(j[i], w[i]);
    }
    cout << y;

}