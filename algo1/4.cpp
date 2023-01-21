#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int b = 1, n = 2;
    while(true) 
    {
        if(q>0 && q - b <= 0)
        {
            cout <<"BOB";
            return 0;
        }
        else q -= b;
        if(q > 0 && q - n <= 0)
        {
            cout <<"NELSON";
            return 0;
        }
        else q -= n;

        b++;
        n = b * 2;

    }
}