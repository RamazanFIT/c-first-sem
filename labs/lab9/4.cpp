#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    int a;
    cin >> q >> a;
    int w;
    int c=0;
    for(int i=0;i<q;i++)
    {
        cin >> w;
        if(w==a)
        c++;
        
    }
    cout << c;

}