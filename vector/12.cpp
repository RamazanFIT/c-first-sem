#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    set<int> jojo;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        jojo.insert(jojo.end(), x);
    }
    
    int cnt=0;
    for(auto i=jojo.begin();i != jojo.end();i++)
    {
        cout << *i <<" ";
    }
    cout << cnt;
}