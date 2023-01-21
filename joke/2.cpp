#include <bits/stdc++.h>

using namespace std;
int w[1000][1000];
int main()
{
    int u, o;
    cin >> u >> o;
    int q;
    cin >> q;
    int x, y, z, c;
    for(int i=0;i<q;i++)
    {
        cin >> x >> y >> z >> c;
        for(int i=x;i<z;i++)
        {
            for(int s=y;s<c;s++)
            {
                w[i][s] = 1;
            }
        }
    }
    int sum=0;
    for(int i=0;i<1000;i++)
    {
        for(int s=0;s<1000;s++)
        {
            sum+=w[i][s];
        }
    }
    cout << o*u-sum;

    
}