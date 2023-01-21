#include <bits/stdc++.h>

using namespace std;

int haha(string q)
{
    int k=0;
    for(int i=0;i<q.size();i++)
    {
        k+=(q[i]-(int)('0'));
    }
    return k;
}



int main()
{
    string q;
    cin >> q;
    cout << haha(q);
}