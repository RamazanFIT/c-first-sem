#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int y = q;
    int cnt=0;
    while(y!=0)
    {
        y/=10;
        cnt++;

    }
    // cout << cnt;
    set<int> jojo;
    while(true)
    {
        q++;
        int t = q;
        while(t != 0)
        {
            jojo.emplace(t%10);
            t/=10;
        }
        if(jojo.size() == cnt)
        {
            cout << q;
            return 0;
        }
        
        jojo.clear();
    }

}