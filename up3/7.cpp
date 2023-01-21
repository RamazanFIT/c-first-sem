#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    getline(cin , q);
    int z;
    cin >> z;
    vector <char> jojo;
    char t;
    for(int i=0;i<z;i++)
    {
        cin >> t;
        jojo.emplace(jojo.end(), t);
    }
    pair <char, int> roma[z];
    int cnt=0;
    for(int i=0;i<jojo.size();i++)
    {
        for(int s=0;s<q.size();s++)
        {
            if(jojo[i] == q[s]) cnt++;
        }
        roma[i].first = jojo[i];
        roma[i].second = cnt;
        cnt=0;
    }
    sort(roma, roma + z);
    for(int i=0;i<z;i++)
    {
        cout << roma[i].first <<" - " << roma[i].second << endl;
    }


}