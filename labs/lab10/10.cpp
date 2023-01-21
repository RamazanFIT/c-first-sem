#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull gen()
{
    static int a = -1;
    a++;
    ull x=1;
    for(int i=0;i<a;i++)
    {
        x*=a;
    }
    return x;
}


int main()
{
    ull q;
    cin >> q;
    vector <ull> jojo (q+1);
    generate(jojo.begin(), jojo.end(), gen);
    for(int i=0;i<=q;i++) cout << jojo[i] <<" ";
}