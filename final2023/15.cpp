#include <bits/stdc++.h>

using namespace std;

int w[1000][1000];



int main()
{
    int q;
    cin >> q;
    map<pair<int, int>, int> jojo;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            pair<int, int> roma(i, s);
            int x;
            cin >> x;
            if(x == 1) jojo[roma]++;
            else jojo[roma] = 0;

        }
    }
    vector<pair<int, int>> akk;
    for(auto it : jojo)
    {
        if(it.second == 1)
        {
            pair<int, int> dok(it.first.first, it.first.second);
            akk.emplace(akk.end(), dok);
        }
    }
    pair<int, int> dok(1000, 1000);
    akk.emplace(akk.end(), dok);
    int cnt=0;
    int cnt1=0;
    for(int i=0;i<akk.size()-1;i++)
    {
        if((akk[i+1].first-akk[i].first == 1 && akk[i+1].second == akk[i].second) || (akk[i+1].second - akk[i].second == 1 && akk[i+1].first == akk[i].first) || (akk[i].second-akk[i+1].second == q-1 && akk[i+1].first-akk[i].first == 1)) cnt++;
        else cnt1++;
    }
    // cout << cnt << endl;
    
}