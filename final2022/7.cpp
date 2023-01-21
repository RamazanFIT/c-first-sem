#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    map<int, int> jojo;

    for(int i=0;i<q.size();i++)
    {
        jojo[q[i]-'0']++;
    }
    for(auto it : jojo)
    {
        cout << it.first <<": " << it.second << endl;
    }

}