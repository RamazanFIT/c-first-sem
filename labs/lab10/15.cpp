#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int x, y, z, w;
    int all=0;
    int cnt=0;
    for(int i=0;i<q;i++)
    {
        cin >> x >> y >> z >> w;
        all+=(x+y+z-w);
        cnt+=(x+y+z);
    }
    cout << (double)(all)/(double)(cnt);
}