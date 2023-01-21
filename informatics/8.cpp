#include <bits/stdc++.h>

using namespace std;

int main()
{
    multimap <int , int > jojo;
    int x;
    int cnt=0;
    int max1=-1;

    while(x != 0)
    {
        cin >> x;
        jojo.emplace(make_pair(x, cnt));
        cnt++;
        max1 = max(max1, x);

    }
    
    vector <int> roma;
    
    auto it1 = jojo.find(max1);
    
    for(auto it = it1;it!=jojo.end();it++)
    {
        roma.emplace(roma.end(), (*it).second);
    }
    int k;
    if(roma.size() == 1)
    {
        cout << 0;
        return 0;
    }
    int k = roma[1] - roma[0];
    cout << k-1;
    
