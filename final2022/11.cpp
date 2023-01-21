#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a;
    string q;
    cin >> a >> q;
    while(q.find(a) != -1)
    {
        q.erase(q.find(a), 1);
    }
    cout << q;
}