#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int w[q][q];
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            cin >> w[i][s];
        }
    }
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(i==s) continue;
            if(w[i][s] != w[s][i])
            {
                cout << "Not perfect.";
                return 0;
            }
        }
    }
    cout <<"Perfect.";
}