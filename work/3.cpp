#include <bits/stdc++.h>

using namespace std;

// bool comp(pair<int, int> a, pair<int, int> b)
// {
//     if(a.second<b.second) return false;
//     else return true;
// }




int main()
{
    vector<pair<int, int>> jojo;
    int cnt=0;
    int max1 = -1;
    // int x;
    while(true)
    {
        int x;
        cin >> x;
        if(x==0) break;
        // int x;
        cnt++;
        pair<int, int> roma(x, cnt);
        jojo.emplace(jojo.end(), roma);
        max1 = max(max1, x);
        
    }
    // vector<pair<int, int>> roma;
    vector<int> roma;

    for(auto i : jojo)
    {
        // pair<int, int> ku(i.first, i.second);
        if(i.first == max1) roma.emplace(roma.end(), i.second);
    }
    int c = roma.size();
    if(c == 1)
    {
        cout << 0;
        return 0;
    }
    sort(roma.begin(), roma.end());
    // cout << roma[1].second - roma[0].second-1;
    // int k = 9999;
    vector <int> Akk;
    for(int i=0;i<c;i++)
    {
        for(int s=i+1;s<c;s++)
        {
            // (roma[s]-roma[i]);
            Akk.emplace(Akk.end(), roma[s]-roma[i]);
        }
    }
    // cout << k;
    sort(Akk.begin(), Akk.end());
    cout << Akk[0];
    // for(auto it : roma)
    // {
    //     cout << it.first <<" " << it.second << endl;
    // }
    return 0;
}