#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    int cnt =0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i]>='0' && q[i] <='9') cnt+=(q[i]-'0');
    }
    cout << cnt;

}