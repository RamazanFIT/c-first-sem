#include <bits/stdc++.h>

using namespace std;
#define F first
#define S second
int main()
{
    int q;
    cin >> q;
    multimap <int, int> jojo;
    int x, y;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        cin >> y;
        jojo.emplace(x, y);
    }
    multimap <int, int> :: iterator it = jojo.begin();
    for(it;it!=jojo.end();it++)
    {
        cout << it->first<< " " << it->second << endl;
    }
}