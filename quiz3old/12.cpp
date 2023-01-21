#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    string a;

    for(int i=0;i<q.size();i++)
    {
        if(a.find(q[i]) == -1)
        {
            a+=q[i];
        }

    }
    int k;
    for(int i=0;i<a.size();i++)
    {
        k = q.find(a[i]);
        q.erase(k, 1);
    }
    cout << q;
    
}