#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<pair<string, int>> Doka;
    int x;
    string s;
    int q;
    cin >> q;
    for(int i=0;i<q;i++)
    {
        cin >> s >> x;
        pair<string, int> altyn(s, x);
        Doka.emplace(altyn);
    }
    int cnt=0;

    map<string, int> Ai;
    set<pair<string, int>> :: iterator it1;
    for(it1=Doka.begin();it1!=Doka.end();it1++)
    {
        Ai[it1->first]++;
    }
    
    map<string, int> :: iterator it2;

    for(it2=Ai.begin();it2!=Ai.end();it2++)
    {
        if(it2->second >= 3) 
        {
            cout << it2->first <<" +1"<< endl;
        }
        else
        {
            cout << it2->first <<" NO BONUS"<< endl;
        }
    }

    
}