#include <bits/stdc++.h>

using namespace std;


int main()
{
    string q;
    cin >> q;
    //BR FL; R L  F  B
    int x=0;
    int y=0;
    for(int i=0;i<q.size();i++)
    {
        if(i =='R')
        {
            x++;
        }
        if(i =='L')
        {
            x--;
            
        }
        if(i =='F')
        {
            y++;
        }
        if(i =='B')
        {
            y--;
        }
    }
    if(x==0 && y==0)
    {
        cout <<  "Chill Yelnur";
    }
    if(x>0 && y>0)
    {
        while(y!=0)
        {
            y--;
            cout << 'L';

        }
        while(x!=0)
        {
            x--;
            cout <<'B';
        }
        
        return 0;
    }
    if(x>0 && y<0)
    {
        while(y!=0)
        {
            y++;
            cout <<'F';

        }
        while(x != 0)
        {
            x--;
            cout << 'L';
        }
        return 0;
    }
    if(x<0 && y>0)
    {
        while(y!=0)
        {
            y--;
            cout <<'B';

        }
        while(x != 0)
        {
            x++;
            cout << 'F'; 
        }
        return 0;
    }
    if(x<0 && y<0)
    {
        
    }
}