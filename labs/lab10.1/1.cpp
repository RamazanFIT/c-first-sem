#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <pair<string, string>, int> jojo;
    int q;
    cin >> q;
    int a, z;
    string x, y;
    for(int i=0;i<q;i++)
    {
        cin >> x >> a >> y >> z;
        jojo[make_pair(x, y)] = a+z;
        // make_pair(x, y);
        

    }
    map <pair<string, string>, int> :: iterator it;
    it = jojo.begin();
    for(it ;it!=jojo.end();it++)
    {
        cout << (it->first).first << " and " << (it->first).second <<" " << it->second << endl;
    }
}