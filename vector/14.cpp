#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    set <char> jojo;
    int x;



    for(int i=0;i<q.size();i++)
    {
        if(q[i] >='A' && q[i] <='Z')
        {
            q[i] = char(q[i]-('A'-'a'));
        }
    }
    for(int i=0;i<q.size();i++)
    {
        jojo.insert(jojo.end(), q[i]);
    }
    set <char> :: iterator i = jojo.begin();
    cout << jojo.size() << endl;
    for(i;i!=jojo.end();i++)
    {
        cout << *i <<" ";
    }
}