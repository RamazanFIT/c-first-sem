#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> jojo;
    string q;
    cin >> q;
    for(int i=0;i<q.size();i++)
    {
        jojo[q[i]]++;
    }
    for(auto it : jojo)
    {
        cout << it.first <<" " << it.second << endl;
    }
}