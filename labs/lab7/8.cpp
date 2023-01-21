#include <bits/stdc++.h>

using namespace std;

int fib(int q)
{
    if(q == 1)
    {
        return 0;
    }
    if(q == 2)
    {
        return 1;
    }
    return (fib(q-1) + fib(q-2));

}


int main()
{
    int q;
    cin >> q;
    cout << fib(q);
}