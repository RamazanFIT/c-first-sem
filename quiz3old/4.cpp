#include <bits/stdc++.h>

using namespace std;
// not true
int main()
{
    string q;
    getline(cin, q);
    bool t=0;
    int c=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] ==' ')
        {
            c++;
            t =1;
            
        }
    }
    if(t) cout << c+1;
    else{
        cout << 0;
    }
    

}