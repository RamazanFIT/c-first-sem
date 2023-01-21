#include <bits/stdc++.h>
// lab9 1 first 
using namespace std;

int main()
{
    vector <pair<int, int>> jojo;
    int q;
    cin >> q;
    int x, y;
    for(int i=0;i<q;i++)
    {
        cin >> x >> y;
        jojo.emplace(jojo.end(), pair<int, int> (x, y));

    }
    sort(jojo.begin(), jojo.end());
    vector<pair<int, int>> :: iterator it;
    for(it = jojo.begin();it!=jojo.end();it++)
    cout << it->first <<" " << it->second << endl;
}