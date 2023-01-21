#include <bits/stdc++.h>

using namespace std;
// yes true
int main()
{
    string q;
    getline(cin, q);
    int c=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] ==' ') c++;
    }
    if(c!=0) cout << c+1;
    else{
        cout << 1;
    }
}