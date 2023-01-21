#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    map<string, int> jojo;
    int a;
    
    vector<string> akk;
    vector<string> roma;
    string x;

    for(int i=0;i<q;i++)
    {
        cin >> x;
        roma.emplace(roma.end(), x);
        jojo[x]++;
    }

    cin >> a;

    for(int i=0;i<a;i++)
    {
        cin >> x;
        jojo[x]++;
    }

    for(auto it : jojo)
    {
        if(it.second == 1) akk.emplace(akk.end(), it.first);
    }

    vector<string> mis;
    vector<string> nomis;
    for(int i=0;i<akk.size();i++)
    {
        bool flag = false;
        for(int s=0;s<q;s++)
        {
            if(akk[i] == roma[s]) flag = true;
        }

        if(flag) mis.emplace(mis.end(), akk[i]);
        else nomis.emplace(nomis.end(), akk[i]);
    }
    cout <<"Missed students:" << endl;
    for(int i=0;i<mis.size();i++)
    {
        cout << "- " << mis[i] << endl;
    }

    cout << "Not in the group:" << endl;

    for(int i=0;i<nomis.size();i++)
    {
        cout << "- " << nomis[i] << endl;
    }

}