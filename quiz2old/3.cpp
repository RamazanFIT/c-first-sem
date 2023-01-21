#include <bits/stdc++.h>

using namespace std;
int w[1001];
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
    int c=0;
    for(int i=0;i<=1000;i++)
    {
        if(w[i]>=2)
        c++;
    }
    cout << c;
}