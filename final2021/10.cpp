#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<string> jojo(q);
    for(int i=0;i<q;i++)
    {
        cin >> jojo[i];
    }

    int a;
    cin >> a;

    vector<pair<string, string>> roma;

    for(int i=0;i<a;i++)
    {
        string x, y;
        cin >> x >> y;
        pair<string, string> akk1(x, y);
        pair<string, string> akk2(y, x);
        roma.insert(roma.end(), akk1);
        roma.insert(roma.end(), akk2);

    }

    string z;
    cin >> z;
    vector<string> akk3;
    
    vector<pair<string, string>> :: iterator it;

    it = unique(roma.begin(), roma.end());
    roma.erase(it, roma.end());

    for(int i=0;i<roma.size();i++)
    {
        if(z == roma[i].first) akk3.emplace(akk3.end(), roma[i].second);
    }

    for(int i=0;i<q;i++)
    {
        for(int s=0;s<roma.size();s++)
        {
            if(jojo[i] == akk3[s]) cout << akk3[s] <<" ";
        }
    }

    

    

}