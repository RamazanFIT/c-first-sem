#include <bits/stdc++.h>

using namespace std;


int main()
{
    string q;
    cin >> q;
    for(int i=0;i<q.size();i++)
    {
        if(q[i]>='A' && q[i] <= 'Z')
        {
            cout << char(q[i]);
            return 0;
        }
    }
    cout << -1;
}