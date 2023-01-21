#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    // klkl ioio 
    // ioio jooj
    vector<pair<string, string>> jojo;

    for(int i=0;i<q;i++)
    {
        string x, y;
        cin >> x >> y;
        pair<string, string> akk(x, y);
        jojo.emplace(jojo.end(), akk);
    }
    map<string, string> dok;
    for(int i=0;i<q;i++)
    {
        
        if(jojo[i].first == "0") continue;

        for(int s=0;s<q;s++)
        {
            if(i == s) continue;
            if(jojo[i].first == "0") continue;
            if(jojo[i].second == jojo[s].first)
            {
                pair<string, string> akk1(jojo[i].first, jojo[s].second);
                dok.emplace(akk1);
                jojo[i] = pair<string, string>("0", "0");
                jojo[s] = pair<string, string>("0", "0");

            }
        }
    }

    for(int i=0;i<q;i++)
    {
        if(jojo[i].first == "0") continue;
        dok.emplace(jojo[i]);
    }
    cout << dok.size() << endl;
    for(auto it : dok)
    {
        cout << it.first << " " << it.second << endl;
    }


}