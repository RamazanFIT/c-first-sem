#include <bits/stdc++.h>

using namespace std;

int haha(string q)
{
    int c=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] % 2 == 0)
        {
            c++;
        }
    }
    return c;
}


int main()
{
    string q;
    cin >> q;
    cout << haha(q);
}