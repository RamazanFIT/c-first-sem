#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <int, pair<string, string>> jojo;
    int q;
    cin >> q;
    int a, z;
    string x, y;
    for(int i=0;i<q;i++)
    {
        cin >> x >> a >> y >> z;
        // jojo[make_pair(x, y)] = a+z;
        // // make_pair(x, y);
        jojo[a+z].first = x;
        jojo[a+z].second = y;
        

    }
    map <int, pair<string, string>> :: iterator it;
    // vector<pair<string, string>, int> roma;
    // vector<pair<pair<string, string>, int>> roma;
    multimap<pair<string, string>, int> roma;
    it = jojo.begin();
    for(it ;it!=jojo.end();it++)
    {
        // cout << (it->second).first << " and " << (it->second).second <<" " << it->first << endl;
        // // cout << i
        // pair<string, string> ji ((it->second).first, (it->second).second );
        // roma.emplace(roma.end(), ji , it->first);
        // roma.emplace(roma.end(), pair<pair<string, string>, int>((pair<string, string>(it->second).first, (it->second).second ), it->first));
        roma.emplace(pair<string, string>(((it->second).first), ((it->second).second)), it->first);
    }
    // vector<pair<string, string>, int>;
    // cout << roma.size() <<" " << jojo.size();
    for(auto i = roma.begin();i!=roma.end();i++)
    {
        cout << (i->first).first <<" and " << (i->first).second <<" " << i->second << endl;
    }
}