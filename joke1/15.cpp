#include <bits/stdc++.h>
using namespace std;

int main()
{
    string q;
    cin >> q;
    string a;
    a = q;
    int z = q.size();
    
    for(int i=a.length()-1;i>=0;i--)
    {
        q+=a[i];
    }
    for(int i=z;i<=z+z;i++)
    {
        if(q[i] == '(')
        {
            q[i] = ')';
        }
    }
    cout << q;

}