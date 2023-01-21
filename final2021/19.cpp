#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<pair<string, string>> jojo;
    for(int i=0;i<q;i++)
    {
        string x, y;
        cin >> x >> y;
        pair<string, string> akk(x, y);
        jojo.emplace(jojo.end(), akk);
    }
    vector<pair<string, string>> roma;
    bool flag = false;
    for(int i=0;i<jojo.size();i++)
    {
        flag = false;
        for(int s=0;s<jojo.size();s++)
        {
            if(jojo[s].second == jojo[i].first)
            {
                pair<string, string> akk1(jojo[s].first, jojo[i].second);
                roma.emplace(roma.end(), akk1);
                jojo.erase(jojo.begin()+i);
                jojo.erase(jojo.begin()+s);
                flag = true;
                break;
            }
        }
        // if(flag) continue;
        // roma.emplace(roma.end(), jojo[i]);
    }
    for(auto it : roma)
    {
        cout << it.first << " " << it.second << endl;
    }
}