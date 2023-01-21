#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    int z=0;
    int t=true;
    for(int i=0;i<q.size();i++)
    {
        for(int s=i;s<q.size();s++)
        {
            if(q[s] != q[q.size()-z])
            {
                t = false;
                continue;
            }
            else{
                z++;
            }
        }
        if(t)
        {
            for(int x=i;x<q.size();x++)
            {
                cout << q[x];
            }
            return 0;
        }
        z=0;
        t = true;
    }
    for(int i=q.size()-1;i>=0;i--)
    {
        for(int s=0;s<i;s++)
        {
            if(q[s] != q[i-z])
            {
                t = false;
                continue;
            }
            else{
                z++;
            }
        }
        if(t)
        {
            for(int x=0;x<i;x++)
            {
                cout << q[x];
            }
            return 0;
        }
        z=0;
        t = true;
    }
    
}