#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> jojo;
    int q, a, c;
    cin >> q >> a >> c;
    int x;
    for(int i=0;i<q;i++)
    {
        vector<int> roma(a);
        for(int s=0;s<a;s++)
        {
            cin >> roma[s];
        }
        jojo.emplace(jojo.end(), roma);
    }
    int cnt=0;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<a;s++)
        {
            if(jojo[i][s] == c) {cnt++; break;}

        }

    }

    cout << cnt;


}