#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, a;
    cin >> q >> a;
    int jojo[q];
    int w[q][a];
    int cnt=0;
    int p=-99999999;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<a;s++)
        {
            cin >> w[i][s];
            if(w[i][s] >0) cnt++;
        }
        jojo[i] = cnt;
        p = max(p, cnt);
        cnt=0;
    }
    bool flag = true;
    for(int i=0;i<q-1;i++)
    {
        if(jojo[i] != jojo[i+1]) flag = false;
    }
    if(flag)
    {
        cout << "Numbers are equal";
        return 0;
    }
    for(int i=0;i<q;i++)
    {
        if(p == jojo[i])
        {
            cout << i+1;
            return 0;
        }
    }
}