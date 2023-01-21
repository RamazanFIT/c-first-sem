#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    stack <char> jojo;
    for(int i=0;i<q.size()/2;i++)
    {
        jojo.emplace(q[i]);
    }
    for(int i=q.size()/2;i<q.size();i++)
    {
        if(jojo.top() == '(' && q[i] == ')')
        jojo.pop();
        else if(jojo.top() == '{' && q[i] == '}')
        jojo.pop();
    }
    
    if(jojo.empty()) cout <<"YES";
    else cout << "NO";
} //0 0 0 0