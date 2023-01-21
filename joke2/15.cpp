#include <bits/stdc++.h>

using namespace std;


int main()
{
    int q;
    cin >> q;
    char a;
    string z;

    for(int i=0;i<q;i++)
    {
        cin >> a;
        z+=a;

    }

    sort(z.begin(), z.end());
    for(int i=q-1;i>=0;i--)
    {
        cout << z[i] <<" ";
    }
    
}