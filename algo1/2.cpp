#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 13 -- b 1 n 2 b 2 n 4 b 4 n 8 b 8 
    // 13 -- b 1 n 2 b 1 n 2 b 1 n 2 b 1 n 2 b 1
    int q;
    cin >> q;
    int b = 1;
    int n = 2;
    while(true) 
    {
        // if(q > 0) q-=b;
        // else
        // {
        //     cout << "BOB";
        //     return 0;
        // }
        // if(q>0) q -= n;
        // else 
        // {
        //     cout << "NELSON";
        //     return 0;
        // }
        if((q - b <= 0) && q > 0) 
        {
            cout <<"NELSON";
            return 0;
        }
        else q -= b;
        if((q - n <= 0) && q > 0)
        {
            cout <<"BOB";
            return 0;
        }
        else q -= n;
        
        
        b++;
        n = b * 2;

    }
}