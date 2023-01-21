#include <bits/stdc++.h>
using namespace std;

int digit(int q,int t, int d)
{
    
    int k=q;
    int c=0;
    int y=q;
    bool flag = true;
    while(flag)
    {
        if(c == d-1) flag = false;
        k/=10;
        c++;
        
    }
    d == c;
    for(int i=0;i<c-1;i++)
    {
        y/=10;
    }

    t = y;
    
    if(t == q%10) return (q%10);
    cout << y <<" ";
    
    return(digit(q, t, d));
}



int main()
{
    int q;
    cin >> q;
    digit(q, 0, -1);
}