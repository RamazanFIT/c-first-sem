#include <bits/stdc++.h>

using namespace std;

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
    int ww[a];
    for(int i=0;i<a;i++)
    {
        cin >> ww[i];
    }
    int c=0;
    int t[a];
    for(int i=0;i<a;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(ww[i] == w[s])
            {
                c++;
            }
        }
        t[i] = c;
        c=0;

    }
    for(int i=0;i<a;i++)
    {
        cout << t[i] << endl;
    }
}