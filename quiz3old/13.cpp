#include <bits/stdc++.h>

using namespace std;

int main()
{
    char q;
    cin >> q;
    string a;
    cin >> a;
    while(a.find(q) != -1)
    {
        a.erase(a.find(q), 1);
    }
    cout << a;

}