#include <bits/stdc++.h>

using namespace std;

int q, a;

int jojo(int x, int y)
{
    if(x<0 || y < 0) return 0;
    if(x >=q) return 0;
    if(y >=a) return 0;
    if(x == q-1 && y == a-1) return 1;
    return(jojo(x, y+1)+jojo(x+1, y));
}

// 0 0 0
// 0 0 0
// 0 0 0




int main()
{
    cin >> q >> a;
    cout << jojo(0, 0);
}