#include <bits/stdc++.h>
using namespace std;
int main()
{
    string q;
    cin >> q;
    int x=0;//RLFB
    int y=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] == 'R')
        {   
            x++;

        }
        if(q[i] == 'L')
        {
            x--;
        }
        if(q[i] == 'F')
        {
            y++;
        }
        if(q[i] == 'B')
        {
            y--;
        }
    }
    if(y>=0 && x>=0)
    {
        while(y!=0)
        {
            y--;
            cout << 'B';

        }
        while(x!=0)
        {
            x--;
            cout <<'L';
        }
    }
    if(y<=0 && x>=0)
    {
        while(y!=0)
        {
            y++;
            cout <<'F';
        }
        while(x!=0)
        {
            x--;
            cout <<'L';
        }

    }
    if(y>=0 && x<=0)
    {
        while(y!=0)
        {
            y--;
            cout <<'B';
        }
        while(x!=0)
        {
            x++;
            cout <<'R';
        }
        
    }
    if(y<=0 && x<=0)
    {
        while(y!=0)
        {
            y++;
            cout <<'U';
        }
        while(x!=0)
        {
            x++;
            cout <<'R';
        }
        
    }
}