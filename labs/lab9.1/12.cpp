#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string jojo;
    char x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        jojo+=x;
    }
    string a;
    int y=0;
    int u=0;
    int k;
    for(int i=0;i<jojo.size();i++)
    {
        for(int s=i;s<jojo.size();s++)
        {
            a = jojo.substr(i, s);
            for(int z=0;z<a.size();z++)
            {
                u+=(a[z] -'0');
            }
            k = u/(a.size());
            y = max(y, k);
            u = 0;
            a="";
        }
    }
    cout << y;

} 