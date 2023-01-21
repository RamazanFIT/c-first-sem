
#include <bits/stdc++.h>
using namespace std;


string bebra(string q)
{
    string k="";
    if(q.size)
    for(int i=0;i<q.size()/2;i++)
    {
        k+=q[i];
        if(i == q.size()/2 || i == q.size()/2 -1) continue;
        k+='(';
    }
    for(int i=q.size()/2;i< q.size();i++)
    {
        k+=q[i];
        if(i == q.size() -1) continue;
        k+=')';
    }
    return k;
}


int main()
{
    string q;
    cin >> q;
    cout << bebra(q);
}