#include <bits/stdc++.h>
using namespace std;


int fib(int k)
{
    if(k == 1) return 1;
    if(k == 2) return 1;
    return (fib(k-1) + fib(k-2));
}





int main()
{
    string q;
    cin >> q;
    string h;
    string a = q;
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int y = a[0];
    string d;
    
    cout << h;
    
}