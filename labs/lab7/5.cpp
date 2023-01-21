#include <bits/stdc++.h>

using namespace std;

string haha(int q)
{
    for(int i=0;i<64;i++)
    {
        if((long long)(pow(2, i)) == q)
        {
            return "Yes";
        }
    }
    return "No";
}


int main()
{
    int q;
    cin >> q;
    cout << haha(q);
}