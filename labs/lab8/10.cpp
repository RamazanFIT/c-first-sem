#include <bits/stdc++.h>

using namespace std;

void haha(int w[], int q, int f)
{
    for(int i=0;i<q;i++)
    {
        if(w[i] == f)
        {
            cout <<"Yes";
            return;
        }
    }
    cout <<"No";
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

    haha(w, q, a);
}