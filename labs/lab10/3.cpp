#include <bits/stdc++.h>
typedef long long L;
using namespace std;


L func(int x)
{
    return ((L)(pow(x, x)));
}



int main()
{
    int q;
    cin >> q;
    for(int i=0;i<=q;i++)
    {
        cout << func(i) << " ";
    }
    
}