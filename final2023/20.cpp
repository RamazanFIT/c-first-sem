#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    map<string, int> jojo;
    int cnt=0;
    for(int i=0;i<q;i++)
    {
        int a;
        cin >> a;
        for(int s=0;s<a;s++)
        {
            string x;
            int y;
            cin >> x >> y;
            cnt+=y;
            jojo[x]+=y;
        }
    }
    for(auto it : jojo)
    {
        cout << it.first << " " << ((double)(it.second)/(double)(cnt))*100 << endl;
    }
}