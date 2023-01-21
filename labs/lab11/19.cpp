#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, a;
    cin >> q >> a;
    int Doka[q][a];
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<a;s++)
        {
            cin >> Doka[i][s];
        }
    }
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<a;s++)
        {
            if(Doka[i][s] == 0 && Doka[i][s+1] == 0 && Doka[i+1][s] == 0 && Doka[i+1][s+1] == 0)
            {
                cout <<"NO";
                return 0;
            }
            if(Doka[i][s] == 1 && Doka[i][s+1] == 1 && Doka[i+1][s] == 1 && Doka[i+1][s+1] == 1)
            {
                cout <<"NO";
                return 0;
            }
        }
    }
    cout << "YES";
}