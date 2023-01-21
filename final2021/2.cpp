#include <bits/stdc++.h>

using namespace std;

void show(map<int, int> jojo)
{
    map<int, int> :: iterator it;
    for(it=jojo.begin();it!=jojo.end();it++)
    {
        cout << it->second << " ";
    }
}






int main()
{
    vector <int> jojo;
    int x;
    int max1=0;
    // set <int> jiji;
    while(x!=0)
    {
        cin >> x;
        jojo.emplace(jojo.end(), x);
        max1 = max(max1, x);
        // jiji.insert(x);
    }
    // cout << jiji.size();
    jojo.pop_back();
    map <int, int> roma;
    int cnt=0;

    for(int i=0;i<=max1;i++)
    {
        pair<int, int> akk(i+1, 0);
        roma.emplace(akk);
    }

    for(int i=0;i<jojo.size();i++)
    {
        roma[jojo[i]]++;
    }

    show(roma);




}