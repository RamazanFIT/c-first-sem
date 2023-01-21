#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    int a;
    cin >> q >> a;
    int w[q][a];
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<a;s++)
        {
            cin >> w[i][s];
        }
    }

    int cnt = 0;
    for(int i=0;i<q-1;i++)
    {
        for(int s=0;s<a;s++)
        {
            // if(s == a-1) cnt = 0;
            if(s == 0) cnt = 0;
            if(w[i][s] == 0) cnt++;
            else {cnt = 0; continue;}
            
            if(cnt == 2)
            {
                if(w[i-1][s] == 0 && w[i-1][s-1] == 0)
                {
                    cout <<"NO";
                    return 0;
                } 
            } 
        }
    }



    cout <<"YES";
}