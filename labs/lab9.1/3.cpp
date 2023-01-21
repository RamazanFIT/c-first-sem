#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    set <string> jojo;
    string w[q];
    string x;

    for(int i=0;i<q;i++)
    {
        cin >> x;
        w[i] = x;
        jojo.insert(x);

    }
    int c=0, b=0;
    
    for(auto i=jojo.begin();i!=jojo.end();i++)
    {
        for(int s=0;s<q;s++)
        {
            
            if(*i==w[s])
            {
                c++;
            }
            
        }
        if(c==3)
        {
            b++;
        }
        c=0;
    }
    cout << b;

}