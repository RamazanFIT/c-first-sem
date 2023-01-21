#include <bits/stdc++.h>

using namespace std;

int haha(int q)
{
    if(q == 0)
    {
        return 1;
    }
    if(q == 1)
    {
        return 1;
    }
    return (q * haha(q-1));
}


int main()
{
    int q;
    cin >> q;
    cout << haha(q);
}