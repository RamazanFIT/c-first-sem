#include <bits/stdc++.h>
using namespace std;

int rec(int q, int& l)
{
    if(q<=0)
    {
        return l;
    }
    

    l = max(q%10, l);
    q/=10;
    return(rec(q, l));
}





int main()
{
    int l=0;
    int q;
    cin >> q;
    cout << rec(q, l);
}