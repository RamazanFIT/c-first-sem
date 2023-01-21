#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<pair<int, int>, int> jojo;
    int q;
    cin >> q;
    int x, y, z;
    for(int i=0;i<q;i++)
    {
        cin >> x >> y;
        pair<int, int> roma1(x, y);
        pair<int, int> roma2(y, x);
        if(jojo.find(roma1) !=jojo.end())
        {
            jojo[roma1]++;
        }
        if(jojo.find(roma2) !=jojo.end())
        {
            jojo[roma2]++;
        }
        jojo[roma1] = 0;
    }
    for(auto it : jojo)
    {
        cout << it.second << endl;
    }

}