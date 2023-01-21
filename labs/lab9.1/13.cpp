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
    int y=0;
    int u=0;
    int h=0;
    for(int i=0;i<q;i++)
    {
        for(int s=i+1;s<q;s++)
        {
            for(int z=i;z<=s;z++)
            {
                y+=w[z];

            }
            h = (y-1)/(s-i);
            u = max(u, h);
            y=0;
        }

    }
    cout << u;
}