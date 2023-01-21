#include <bits/stdc++.h>

using namespace std;

void func(string q)
{
    int k=q.find('@');
    int a = q.find('.');
    if(a == q.size()-1)
    {
        cout <<"NO";
        return;
    }
    for(int i=0;i<k;i++)
    {
        
        if(q[i] <'a' || q[i]>'z')
        {
            cout << "NO";
            return;
        }
    }
    
    
    if(k == -1)
    {
        cout << "NO";
        return;
    }
    if(a == -1)
    {
        cout << "NO";
        return;
    }
    for(int i=k+1;i<a;i++)
    {
        
        if(q[i] <'a' || q[i]>'z')
        {
            cout << "NO";
            return;

        }
    }
    for(int i=a+1;i<q.size();i++)
    {
        
        if(q[i] <'a' || q[i]>'z')
        {
            cout << "NO";
            return;
        }
    }
    cout <<"YES";
}





int main()
{  //AAA@BBB.CCC
    string q;
    cin >> q;
    func(q);
}