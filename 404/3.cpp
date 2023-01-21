#include <bits/stdc++.h>

using namespace std;

int main()
{   
    string q;
    cin >> q;
    string a;
    cin >> a;
    int c=0;
    int d=0;
    for(int i=0;i<q.size()-a.size()+1;i++)
    {
        c=0;

        for(int s=0;s<a.size();s++)
        {
            if(q[i+s] == a[s])
            {
                c++;
            }
            if(c == a.size())
            {
                d++;
            }
        }
    }
    string w[a.size()];
    
}