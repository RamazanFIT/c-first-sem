#include <bits/stdc++.h>


int fib(int q)
{
    if(q == 0) return 0;
    if(q == 1)
    {
        return 1;
    }
    return(fib(q-1) + fib(q-2));
}



int main()
{
    int q;
    std:: cin >> q;
    std:: cout << fib(q);
}