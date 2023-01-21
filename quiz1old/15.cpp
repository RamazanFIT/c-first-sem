#include <bits/stdc++.h>
using namespace std;
int main()
{
    string q;
    cin >> q;
    int w = 0, e = 1;
    int b=0;
    while(w+e<=q.size())
    {
        
        
        b = w+e;
        cout << q[b-1];
        w = e;
        e = b;
    }
    return 0;
}