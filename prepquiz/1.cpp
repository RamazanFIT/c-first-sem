#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    string a;
    cin >> a;
    // int cnt=0;
    set <int> jojo;
    for(int i=0;i<q.size();i++)
    {
        for(int s=0;s<q.size();s++)
        {
            string z;
            z = q.substr(i, s);
            if(z == a) {jojo.emplace(i);}
            // z.clear();
        }
    }
    // cout << cnt;
    for(auto i : jojo)
    {
        cout << i << " ";
    }
}