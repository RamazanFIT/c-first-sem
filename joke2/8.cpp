#include <bits/stdc++.h>
using namespace std;

int gcd1(int q, int a)
{
    int k;
        if(q > a)
        {
            k=q;
        }
        else{
            k = a;
        }
        for(int i=k;i>=1;i--)
        {
            if((q % i == 0) && (a % i == 0))
            {
                return i;
            }
        }
}



int main()
{
    int q, a; 
    cin >> q >> a;
    cout << gcd1(q, a); 
}