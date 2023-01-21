#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long q, a;
    cin >> q >> a;
    for(long long i=-60;i<=60;i++)
    {
        if(q*(pow(2, i)) == a)
        {
            cout << "YES " << i;
            return 0;
        }
    }
    cout <<"NO";
}