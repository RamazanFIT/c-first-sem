#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack <char> jojo;
    string q;
    cin >> q;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] == '(') jojo.emplace(q[i]);
        if(q[i] == ')') jojo.pop();
    }
    if(jojo.empty()) cout <<"YES";
    else cout <<"NO";
}