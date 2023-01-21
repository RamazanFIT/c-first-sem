#include <bits/stdc++.h>

using namespace std;

int haha(string q)
{
    int c=0;
    for(int i=0;i<q.size();i++)
    {
        c+=((q[i] - (int)('0'))/2);
    }
    return c;
}

int main()
{
    string q;
    cin >> q;
    cout << haha(q);
}