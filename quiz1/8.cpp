#include <bits/stdc++.h>

using namespace std;

int digit(int q, int c)
{
    c+=q%10;
    q/=10;
    if(q<=0) return c;
    return(digit(q, c));
}




int main()
{
    int q;
    cin >> q;
    cout << digit(q, 0);

}