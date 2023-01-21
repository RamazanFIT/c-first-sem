#include <bits/stdc++.h>

using namespace std;

int count(int q)
{
    int c=0;
    for(int i=1;i<q;i++)
    {
        if(q%i==0) c++;


    }
    return c;

}
int high(int q)
{
    for(int i=q-1;i>=1;i--)
    {
        if(q%i==0)
        {
            return i;
        }
    }
}

int yaya(int q)
{
    if(q == 1) return 1;
    return(count(q) + yaya(high(q)));
}




int main()
{
    int q;
    cin >> q;
    cout << yaya(q);
    

}