#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    for(int i=0;i<q.size();i++)
    {
        if((int)q[i] % 2 == 0) cout << q[i];
    }
}