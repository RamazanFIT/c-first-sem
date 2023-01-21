#include <bits/stdc++.h>
// ERATOSPHEN REWETO
using namespace std;

int main()
{
    int q;
    cin >> q;
    bool sieve[q+1];
    for(int i=2;i<q+1;i++) sieve[i] = 1;
    int x = 2;

    while(x <= sqrt(q))
    {
        if(sieve[x]) for(int y = x*x;y<=q;y+=x) 
        {
            sieve[y] = 0;
        }
        x+=1;
    }
    for(int i=q;i>=2;i--)
    {
        if(sieve[i])
        {
            cout << i <<" ";
            // return 0;
        }
    }

    // cout << sqrt(30);
    // for cout sieve[]
    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

}