#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<pair<pair<string, int>, pair<string, int>>, int> jojo;
    int q;
    cin >> q;
    int x;
    for(int i=0;i<q;i++)
    {
        pair<pair<string, int>, pair<string, int>> roma;
        cin >> (roma.first).first >> (roma.first).second;
        cin >> (roma.second).first >> (roma.second).second;
        x = (roma.first).second + (roma.second).second;
        jojo.emplace(roma, x);
    }
    map<pair<pair<string, int>, pair<string, int>>, int> :: iterator it;
    for(it = jojo.begin();it!=jojo.end();it++)
    {
        cout << (it->first).first.first << " and " << (it->first).second.first <<" " << it->second << endl;
    }

} 