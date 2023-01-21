#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int w[q];
    int j[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    for(int i=0;i<q;i++)
    {
        cin >> j[i];
    }
    int x;
    cin >> x;
    int c=0;
    for(int i=0;i<q;i++)
    {
        
        
            if(x<=j[i] && x >=w[i])
            {
                c++;
            }
        
        
    }
    cout << c;
}