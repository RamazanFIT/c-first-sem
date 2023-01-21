#include <bits/stdc++.h>
using namespace std;
int main()
{
    string q;
    cin >> q;
    string a;
    string b;
    string h;
    string c;
    for(int i=0;i<q.size();i++)
    {
        for(int s=i;s<=q.size();s++)
        {
            
            a = q.substr(i, s);
            b = a;
            reverse(b.begin(), b.end());
            if(a == b) h = a;
            if(h.size()>c.size())
            {
                c = h;
            }
            a.erase(0, a.size());
            b.erase(0, b.size());

        }
    }
    cout << c;
}