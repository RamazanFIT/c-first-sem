#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int z=1;

    while(q>=0)
    {
        q-=z;
        if(q <=0)
        {
            cout << "Bob";
            return 0;
        }
        q-=2*z;
        if(q<=0)
        {
            cout << "Nelson";
            return 0;
        }
        z++;
    }
    
}