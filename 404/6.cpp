#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int w[1000];
    cin >> n;
    int z=0;
    for(int i=1;i<250;i++)
    {
        for(int s=1;s<250;s++)
        {
            if((i<=s)  && ((pow(i, 2) + pow(s, 2)) == n))
            {  
                w[z] = i;
                z++;
            }
        }
    }
    int t=0;
    int j[1000];
    int c=0;
    for(int s=0;s<z;s++)
    {
        for(int i=0;i<z;i++)
        {
            if(i==s) continue;
            if(w[s]>w[i])
            {
            if(((w[s] + w[i]) - 1)%4 == 0)
            {
                j[c] = w[i];
                c++;
            }
            }
            if(w[s]<=w[i])
            {
            if(((w[i] + w[s]) - 1)%4 == 0)
            {
                j[c] = w[i];
                c++;
            }
            }

        }
    }
    for(int i=0;i<c;i++)
    {
        t+=j[i];
    }
    cout << t;
}