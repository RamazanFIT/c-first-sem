#include <bits/stdc++.h>
using namespace std;


int main()
{
    int q, a;
    
    std:: cin >> a >> q;
    if(a == 1)
    {
        for(int i=1;i<q+1;i++)
        {
            cout << i;
            cout << endl;
        }
    }
    if(a == 2)
    {
        for(int i=1;i<q+1;i++)
        {
            for(int s=1;s<q+1;s++)
            {
                cout << i <<" " << s;
                cout << endl;
            }
        }
    }
    if(a == 3)
    {
        for(int i=1;i<q+1;i++)
        {
            for(int s=1;s<q+1;s++)
            {
                for(int z=1;z<q+1;z++)
                {
                    cout << i << " " << s << " " << z << endl;
                }
            }
        }
    }
    if(a == 4)
    {
        for(int i=1;i<q+1;i++)
        {
            for(int s=1;s<q+1;s++)
            {
                for(int z=1;z<q+1;z++)
                {
                    for(int y=1;y<q+1;y++)
                    {
                        cout << i <<" " << s <<" " << z << " " << y << endl;
                    }
                }
            }
        }
    }
    if(a == 5)
    {
        for(int i=1;i<q+1;i++)
        {
            for(int s=1;s<q+1;s++)
            {
                for(int z=1;z<q+1;z++)
                {
                    for(int y=1;y<q+1;y++)
                    {
                        for(int d =1;d<q+1;d++)
                        {
                            cout << i <<" " << s <<" " << z << " " << y << " "<< d << endl;
                        }
                    }
                }
            }
        }
    }
    if(a == 6)
    {
        
        for(int i=1;i<q+1;i++)
        {
            for(int s=1;s<q+1;s++)
            {
                for(int z=1;z<q+1;z++)
                {
                    for(int y=1;y<q+1;y++)
                    {
                        for(int d =1;d<q+1;d++)
                        {
                            for(int h=1;h<q+1;h++)
                            {
                                cout << i <<" " << s <<" " << z << " " << y << " "<< d << " "<< h << endl;
                            }
                        }
                    }
                }
            }
        }
    }
}