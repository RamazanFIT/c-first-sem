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
        jojo.insert(x);
    }

    int sum=0;
    for(set<int> :: iterator it = jojo.begin();it!=jojo.end();it++)
    {
        sum+=*it;

    }
    cout << sum;
}