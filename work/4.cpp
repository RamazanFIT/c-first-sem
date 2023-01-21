#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string a;
    int x;
    set <string> roma;
    map<string, int> jojo;
    for(int i =0;i<q;i++)
    {
        cin >> x;
        for(int s=0;s<x;s++)
        {
            cin >> a;
            jojo[a]++;
            roma.insert(a);
        }
    }
    int cnt=0;
    for(auto it : jojo)
    {
        if(it.second == q) cnt++;
    }

    cout << cnt << endl;
    for(auto it : jojo)
    {
        if(it.second == q) cout << it.first << endl;
    }
    cout << roma.size() << endl;

    for(auto it1 : roma)
    {
        cout << it1 << endl;
    }

}