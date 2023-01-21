#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    map <char, int> roma;
    string a;
    vector <pair<char, int>> jojo(q);
    for(int i=0;i<q;i++)
    {
        // cin >> jojo[i];
        cin >> a;
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        for(int s=0;s<a.size();s++)
        {
            roma[a[s]]++;
        }
    }

    map <char, int> :: iterator it;
    for(it=roma.begin();it!=roma.end();it++)
    {
        pair<char, int> koko;
        koko.second = it->second;
        koko.first = it->first;
        jojo.emplace(jojo.end(), koko);
    }
    sort(jojo.begin(), jojo.end());
    // reverse(jojo.begin(), jojo.end());
    bool flag = true;
    for(int i=0;i<jojo.size();i++)
    {
        if(jojo[i].second>=q) flag = false; 
    }
    if(flag)
    {
        cout << "NO COMMON CHARACTERS";
        return 0;
    }
    for(int i=0;i<jojo.size();i++)
    {
        if(jojo[i].second>=q) cout << jojo[i].first <<" ";
    }
    
}