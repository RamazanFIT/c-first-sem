#include <bits/stdc++.h>

using namespace std;


int fib(int q)
{
    if(q==0) return 0;
    if(q==1) return 1;
    return(fib(q-2)+fib(q-1));
}



int main()
{
    int q;
    cin >> q;
    cout << fib(q-1);
}