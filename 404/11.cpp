#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }

    int z=0;
    int j[q];
    for(int i=0;i<q;i++)
    {
        bool flag = 0;
        for(int s=2;s<w[i];s++)
        {
            if(w[i] % s == 0)
            {
                flag = true;
                break;
            }
            
            
        }
        if(flag != true)
            {
                j[z] = w[i];
                z++;
            }
    }
    int sum =0;
    for(int i=0;i<z;i++)
    {
        sum+=j[i];
    }
    cout << sum;
}