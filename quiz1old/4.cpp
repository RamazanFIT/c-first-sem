#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q; // D R U L
    cin >> q;
    int a, m;
    cin >> a >> m;
    char w[a][m];
    for(int i=0;i<a;i++)
    {
        for(int s=0;s<m;s++)
        {
            w[i][s] = '.';
        }
    }
    int z=0;
    int x=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] == 'D')
        {
            z++;
            w[z][x] = '*';
        }
        if(q[i] == 'R')
        {
            x++;
            w[z][x] = '*';
        }
        if(q[i] == 'L')
        {
            x--;
            w[z][x] = '*';
        }
        if(q[i] == 'U')
        {
            z--;
            w[z][x] = '*';
        }
    }
    w[0][0] ='*';

    for(int i=0;i<a;i++)
    { 
        for(int s=0;s<m;s++)
        {
            cout << w[i][s];

        }
        cout << endl;
    }
    

}