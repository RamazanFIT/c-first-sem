#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string x;
    

    map <string, int> jojo;
    for(int i=1;i<=q;i++)
    {
        cin >> x;
        jojo.emplace(x, i);
    }
    map <string, int> :: iterator it = jojo.begin();
    for(it;it != jojo.end();it++)
    {
        cout << it->first <<" " << it->second << endl;
    }
}