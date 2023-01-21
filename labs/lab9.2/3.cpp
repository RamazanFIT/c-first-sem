#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    stack <char> jojo;
    
    for(int i=0;i<q.size();i++)
    {
       
        if(jojo.empty()) jojo.emplace(q[i]);
        else if (q[i] == '(') jojo.emplace(q[i]);
        else if (jojo.top() == '(') jojo.pop();
        else {cout << "NO"; return 0;}
        
    }
    // cout << jojo.size();
    if(jojo.empty()) cout << "YES";
    else cout << "NO";
}