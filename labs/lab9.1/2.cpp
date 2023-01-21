#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    set <int> jojo;
    int w[q];
    int x;

    for(int i=0;i<q;i++)
    {
        cin >> x;
        w[i] = x;
        jojo.insert(x);

    }
    int c=0, b=0;
    set <int> :: iterator i=jojo.begin();
    for(i;i!=jojo.end();i++)
    {
        for(int s=0;s<q;s++)
        {
            if(c>=2) exit;
            if(*i==w[s])
            {
                c++;
            }
            
        }
        if(c>=2)
        {
            b++;
        }
        c=0;
    }
    cout << b;

}