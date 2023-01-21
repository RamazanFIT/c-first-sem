#include <bits/stdc++.h>
using namespace std;

int main()
{
    string q;
    cin >> q;
    int a;
    cin >> a;
    string w;
    cin >> w;
    int c=0;
    int b=q.size();
    int k;
    for(int i=0;i<a;i++)
    {
        
        k = w.find(q);
        if(k == -1)
        {
            cout <<"NO";
            return 0;
        }
        c++;
        w.erase(k, b);
    }
    if(c>=a)
    {
        cout <<"YES";
    }
    else{
        cout <<"NO";
    }

}