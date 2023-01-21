#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, a, c;
    cin >> q >> a >> c;
    string f;
    cin >> f;
    int w=0, e=0;
    for(int i=0;i<f.size();i++)
    {
        if(f[i]>='A' && f[i] <='Z') w+=a;
        if(f[i]>='a' && f[i] <='z') e+=c;
    }
    cout << min(w, e);
}