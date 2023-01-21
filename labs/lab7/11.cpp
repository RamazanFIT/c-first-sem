#include <bits/stdc++.h>

using namespace std;

char haha(string q)
{
    char k = '0';
    for(int i=0;i<q.size();i++)
    {
        k = max(k, q[i]);
    }

    return (char(k));
}

int main()
{
    string q;
    cin >> q;
    cout << haha(q);
}