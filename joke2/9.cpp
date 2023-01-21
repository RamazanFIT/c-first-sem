#include <bits/stdc++.h>
using namespace std;

int gcd1(int q, int a)
{
    if(q == a)
    {
        return q;
    }
    int z;
    int k;
    if(q > a)
    {
        k = q-a;
        z = a;
    }
    else {k = a-q, z = q;}
    return(gcd1(k, z));
}



int main()
{
    int q, a; 
    cin >> q >> a;
    cout << gcd1(q, a); 
}