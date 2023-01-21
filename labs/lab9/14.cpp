#include <bits/stdc++.h>
using namespace std;

string binary(int q, string a)
{
    if(q == 0)
    {
        reverse(a.begin(), a.end());
        return (a);
    }
    a+=(char(q%2+'0'));
    return(binary(q/2, a));
}
int main()
{
    int q;
    cin >> q;
    cout << binary(q, "");
}