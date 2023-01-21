#include <bits/stdc++.h>

using namespace std;

int gcd(int m, int a)
{
    while(m*a != 0)
    {
        if(m>a)
        {
            m %= a;
        }
        if(a > m)
        {
            a %= m;
        }
    }
    return (m + a);

}



int main()
{
    int m;
    cin >> m;
    int w[m];
    int k=1;

    for(int i=0;i<m;i++)
    {
        cin >> w[i];
    }
    
    for(int i=0;i<m;i++)
    {
        for(int s=i+1;s<m;s++)
        {
            k = max(k, gcd(w[i], w[s]));
        }
    }
    cout << k;

}