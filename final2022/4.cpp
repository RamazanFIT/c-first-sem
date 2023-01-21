#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if(a.first > b.first) return true;
    else return false;
}





int main()
{
    map<int, int> jojo;
    vector<pair<int, int>> roma;
    int q, x;
    cin >> q;
    int k=-1;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        jojo[x]++;
    }
    for(auto it : jojo)
    {
        roma.emplace(roma.end(), it);
        k = max(k, it.second);
    }

    sort(roma.begin(), roma.end(), comp);

    for(int i=0;i<roma.size();i++)
    {
        if(k == roma[i].second) cout << roma[i].first <<" ";
    }
}