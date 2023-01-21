#include <bits/stdc++.h>

using namespace std;

int digit(string q, int c)
{
    c+=(q[0]-'0');
    q.erase(0, 1);
    return(digit(q, c));
}






int main()
{
    string q;
    cin >> q;

}