#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    int k = q;
    int c=0;
    while(k != 0)
    {
        k/=10;
        c++;
    }
    for(int i=0;i<c-1;i++)
    {
        q/=10;
    }
    cout << q;
}