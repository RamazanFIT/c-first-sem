#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    int all=0;
    cin >> q;
    map <string, int> jojo;
    for(int i=0;i<q;i++)
    {
        int a;
        cin >> a;
        string h;
        int x;
        for(int s=0;s<a;s++)
        {
            cin >> h >> x;
            jojo[h]+=x;
            all+=x;

        }
        
    }
    map <string, int> :: iterator it = jojo.begin();
    for(it;it!= jojo.end();it++)
    {
        cout << it->first <<" " << (double)((it->second)/all) << endl;
    }
}