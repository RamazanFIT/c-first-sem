#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    while(q.find("11") != -1)
    {
        int k = q.find("11");
        q.erase(k, 2);
    }
    cout << q;
}