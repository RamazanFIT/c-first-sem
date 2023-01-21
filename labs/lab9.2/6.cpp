#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    multimap <int, int> jojo;
    int x, y;
    int cnt=0;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        cin >> y;
        int k = x + y;
        jojo.emplace(k, i);

    }
    for(auto it=jojo.begin();it!=jojo.end();it++)
    {
        cout << it->second+1 <<" ";
    }
    
    
    
}