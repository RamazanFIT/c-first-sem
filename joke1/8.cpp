#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int k=1;
    int m=1;
    int q;
    cin >> q;
    
    for(int i=0;i<100;i++)
    {
        
        if(k == q)
        {
            cout <<"YES";
            return 0;
        }
        k+=3;
        
        if(m == q)
        {
            cout <<"YES";
            return 0;
        }
        m+=5;
    }

    cout <<"NO";
}