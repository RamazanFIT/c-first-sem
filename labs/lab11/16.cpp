#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int q;
    cin >> q;
    multimap <double, pair<int , int>> jojo;
    int u, o;
    double t;
    for(int i=0;i<q;i++)
    {
        cin >> u >> o;
        t = sqrt(pow((u-x), 2)+pow((o-y), 2));
        pair<int, int> roma(u, o);
        jojo.emplace(t, roma);
    }
    multimap <double, pair<int , int>> :: iterator it;
    for(it = jojo.begin();it!=jojo.end();it++)
    {
        cout << (it->second).first <<" " << (it->second).second << endl;
    }
}