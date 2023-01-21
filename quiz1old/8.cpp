#include <bits/stdc++.h>
using namespace std;
int main()
{
    string q;
    cin >> q;
    char w[13] = {'A', 'B', 'C', 'E', 'H', 'K', 'M', 'O', 'P', 'T', 'X', 'Y'};
    if(q.size() != 6)
    {
        cout <<"No";
        return 0;
    }
    bool flag = true;
    for(int i=0;i<13;i++)
    {
        if(w[i] == q[0]) flag = false;
    }
    if(flag)
    {
        cout <<"No";
        return 0;
    }
    if((q[1]>'9') || (q[1] <'0') || (q[2]>'9') || (q[2] <'0') || (q[3]>'9') || (q[3] <'0'))
    {
        cout << "No";
        return 0;
    }
    bool t=true, y=true;
    for(int i=0;i<13;i++)
    {
        if(w[i] == q[1]) t = false;
    }
    if(t)
    {
        cout <<"No";
        return 0;
    }
    for(int i=0;i<13;i++)
    {
        if(w[i] == q[2]) y = false;
    }
    if(y)
    {
        cout << y;
        return 0;
    }

    cout <<"Yes";
}