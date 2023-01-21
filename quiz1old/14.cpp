#include <bits/stdc++.h>
using namespace std;
int main()
{
    string q;
    cin >> q;
    int w = 0, e = 1;
    int b=0;
    while(b<=q.size())
    {
        
        cout << b;
        b = w+e;
        w = e;
        e = b;
    }
}