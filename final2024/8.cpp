#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    map<int, int> jojo;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        jojo[x]++;
    }
    int sum=0;
    for(map<int, int> :: iterator it = jojo.begin();it!=jojo.end();it++)
    {
        if(it->second == 1) sum+=it->first;
    }
    cout << sum;
}