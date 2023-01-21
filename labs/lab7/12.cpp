#include <bits/stdc++.h>

using namespace std;

string haha(string q)
{
    int z=0;
    for(int i=0;i<q.size()/2;i++)
    {
        if(q[i] != q[q.size()-1-z])
        return "No";
        z++;
    }
    return "Yes";
}

int main()
{
    string q;
    cin >> q;
    cout << haha(q);
}