#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) 
{
    if(a.second > b.second) return true;
    else if(a.second == b.second) if(a.first > b.first) return true;
    else return false;

    // if(a.second > b.second) return true;
    // if(a.second == b.second) if(a.first > b.first) return true;
    // else return false;
}




int main()
{
    int q;
    int a;
    cin >> q >> a;
    // unordered_map<int, int> akk;
    vector<pair<int, int>> akk;
    int cnt=0;
    int x;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<a;s++)
        {   
            cin >> x;
            if(x>0) cnt++;
        }
        // akk[i+1] = cnt;
        pair<int, int> rus(i+1, cnt);
        akk.emplace(akk.end(), rus);
        cnt=0;
    }
    sort(akk.begin(), akk.end(), comp);
    bool boolka = true;
    for(int i=0;i<akk.size()-1;i++)
    {
        // cout << it.first <<" " << it.second << endl;
        if(akk[i].second != akk[i+1].second) {boolka = false; exit;}
    }
    if(boolka)
    {
        cout << "Numbers are equal";
        return 0;
    }
    cout << akk[0].first;
    return 0;
}