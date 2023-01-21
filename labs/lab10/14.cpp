#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    double all=0;
    cin >> q;
    map <string, double> jojo;
    for(int i=0;i<q;i++)
    {
        int a;
        cin >> a;
        string h;
        double x;
        for(int s=0;s<a;s++)
        {
            cin >> h >> x;
            jojo[h]+=x;
            all+=x;

        }
        
    }
    map <string, double> :: iterator it = jojo.begin();
    for(it;it!= jojo.end();it++)
    {
        cout << it->first <<" " << ((double)((it->second)/all)*100) << endl;
    }
}