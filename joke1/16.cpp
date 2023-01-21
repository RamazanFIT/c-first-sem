#include <bits/stdc++.h>
using namespace std;


int main()
{
    string q;
    cin >> q;
    string h;
    q+='&';
    for(int i=0;i<q.size()-1;i++)
    {
        if(q[i] != q[i+1])
        {
            h+=q[i];
        }
    }
    cout << h;
}