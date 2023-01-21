#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if((a.first <b.first) && (a.second >b.second) ) return 1;
    // else return 0;
    
    // if(a.first == b.first)
    // {
    //     if(a.second > b.second) return 1;
    //     else return 0;
    // }
}










int main()
{
    int x, y;
    cin >> x >> y;
    int q;
    cin >> q;
    multimap <int, pair <int, int>> jojo;
    int o, u;

    for(int i=0;i<q;i++)
    {
        cin >> o >> u;
        pair<int, int> roma(o, u);
        double g = sqrt(pow((x-o), 2)+pow((y-u), 2));
        jojo.emplace(g, roma);
    }   
    multimap <int, pair <int, int>> :: iterator it;
    vector<pair<int, int>> uaua;
    for(it = jojo.begin();it!=jojo.end();it++)
    {
        // cout << (it->second).first <<" " << it->second.second << endl;
        pair <int, int> jiji((it->second).first, (it->second).second);
        uaua.emplace(uaua.end(), jiji);
    }
    sort(uaua.begin(), uaua.end(), comp);
    for(int i=0;i<uaua.size();i++)
    {
        cout << uaua[i].first <<" " <<uaua[i].second << endl;
    }
    
}