#include <bits/stdc++.h>
using namespace std;
int w[100000];
int main()
{
    string q;
    cin >> q;
    for(int i=0;i<q.size();i++)
    {
        w[q[i]]++;
    }
    int c=0;
    for(int i=0;i<100000;i++)
    {
        if(w[i]!=0)
        {
            c++;
        }
    }
    cout << c;
}