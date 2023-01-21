#include <bits/stdc++.h>

using namespace std;

int fuck(int q)
{
    if(q == 1) return 1;
    return(q*fuck(q-1));
}




int main()
{
    int q;
    cin >> q;
    cout << fuck(q);
}