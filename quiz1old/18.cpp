#include <bits/stdc++.h>
using namespace std;

int rec(int q,int y)
{

    int k = q;
    int c=0;
    while(k>0)
    {   
        k/=10;
        c++;
    }
    if(c == y) return q%10;
    int u = q;
    for(int i=0;i<c-y-1;i++)
    {
        u/=10;
    }
    cout << u%10 <<" ";
    return(rec(q, y+1));
}




int main()
{
    int q;
    cin >> q;
    rec(q, 0);

}