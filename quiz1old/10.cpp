#include <bits/stdc++.h>
using namespace std;
int main()
{
    string q;
    cin >> q;
    int c=0;
    string a;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] =='0')
        {
            c++;
        }
        else{
            a+=(char('a'+c));
            c=0;
        }
    }
    cout << a;
}