#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <int, int> jojo;
    int x;
    int y=-1;
    while(x!=0)
    {
        cin >> x;
        jojo[x]++;
        y = max(y, x);
    }
    cout << jojo[y];
}