#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    char a;
    cin >> a;
    int k = q.find(a);
    int l=-1;
    for(int i=q.size()-1;i>=0;i--)
    {
        if(i == k) break;
        if(a == q[i])
        {
            l = i;
            break;
        }
    }
    cout << k << " ";
    if(l != -1) cout << l;
}