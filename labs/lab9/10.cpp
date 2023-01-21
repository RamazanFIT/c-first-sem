#include <bits/stdc++.h>
#define F first
#define S second 
using namespace std;

int main()
{
    int q;
    cin >> q;
    pair <int, int> jojo[q];
    int w[q];
    for(int i=0;i<q;i++)
    {
        cin >> jojo[i].F;
        cin >> jojo[i].S;
        w[i] = (jojo[i].F+jojo[i].S);
    }
    int a[q];
    copy(w, w+q, a);
    sort(a, a+q);
    
    string z;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            
            if(a[i] == w[s])
            {
                cout << s+1 <<" ";
                
            }
        }
    }
    
    
}