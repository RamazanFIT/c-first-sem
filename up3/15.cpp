#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] >='a' && q[i]<='z' || q[i]>='A' && q[i] <='Z')
        cout << q[i];
    }
}