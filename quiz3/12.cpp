#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string w[100];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    int a;
    cin >> a;
    string ww[100];
    for(int i=0;i<a;i++)
    {
        cin >> ww[i];
    }
    bool flag = true;
    string z[100];
    int x=0;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<a;s++)
        {
            if(w[i] == ww[s]) flag = false;
        }
        if(flag)
        {
            z[x] = w[i];
            x++;
        }
        flag = true;

        
    }
    flag = true;
    string h[100];
    int c=0;
    for(int i=0;i<a;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(ww[i] == w[s]) flag = false;
        }
        if(flag) 

        {    h[c] = ww[i];
            c++;
        }
        flag = true;
    }

    cout << "Missed students:" << endl;
    for(int i=0;i<x;i++)
    {
        cout <<"- " <<  z[i] << endl;
    }


    cout <<"Not in the group:" << endl;
    for(int i=0;i<c;i++)
    {
        cout <<"- " << h[i] << endl;
    }
}