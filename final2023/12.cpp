#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    if(d == 30 && m != 12)
    {
        cout << 1 <<" "<< m+1 << " " << y;
        return 0;
    }
    if(d != 30 && m == 12)
    {
        cout << d+1 <<" " << m << " " << y;
        return 0;
    }
    if(d == 30 && m == 12) 
    {
        cout << 1 <<" " << 1 << " " << y+1;
        return 0;
    }
    cout << d + 1 << " " << m << " " << y;
    return 0;
}