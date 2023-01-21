#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;

    string w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    string j[q];
    int z=0;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<w[i].size();s++)
        {
            if(w[i][s] != '0')
            {
                j[i][z] = w[i][s];
                z++;
            }

        }
        z=0;
        
    }
    int c=0;
    int t=0;
    for(int i=0;i<q;i++)
    {
        if((j[i][0] == j[q-1-c][1]) && (j[i][1] == j[q-1-c][0]))
        {
            t++;
        }
        

        c--;
    }
    if(t+1 == q)
    {
        cout <<"YES";
        return 0;
    }
    cout <<"NO";

}
