#include <bits/stdc++.h>

using namespace std;

long long fibK(long long m, long long k)
{
    if(m == 1) return 0;
    if(m == 2) return 1;
    return (fibK(m-2, k) + k*fibK(m-1, k));

}





int main()
{
    long long q;
    cin >> q;
    long long a;
    cin >> a;
    if(q>1000) q = 1000;
    cout << (fibK(a, q))%10;
}