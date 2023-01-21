#include <bits/stdc++.h>
using namespace std;

int main()
{
    string q;
    cin >> q;
    string k;
    for(int i=0;i<q.size()/2;i++)
    {
        if(q[q.size()/2 - i] == q[q.size()/2 + i])
        {
            k+=q[q.size()/2 - i];
        }
    }
    bool flag = true;
    for(int i=0;i<q.size();i++)
    {
        for(int s=0;s<k.size();s++)
        {
            if(q[i] == k[i])
            {
                flag = 0;
            }
        }
        if(flag == true)
        {
            cout << q[i];
        }
        flag = true;
    }
}