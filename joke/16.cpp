#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int w[q], j[q];
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
        if(w[i] > j[i])
        {
            if(x>j[i] && x <=w[i])
            {
                c++;
            }
        }
        else{
            if(x<=j[i] && x >w[i])
            {
                c++;
            }
        }
    }
    if(x==5) c--;
    cout << c;
}