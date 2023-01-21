#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    map<char, int> jojo;
    for(int i=0;i<q.size();i++)
    {
        jojo[q[i]]++;
    }
    vector<char> roma;
    for(auto it : jojo)
    {
        if(it.second >= 1) roma.emplace(roma.end(), it.first);
    }

    for(int i=0;i<roma.size();i++)
    {
        int k = q.find(roma[i]);
        q.erase(k, 1);
    }
    cout << q;

}