#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int w[q][2];
    string j = "";
   
    for(int i=0;i<2;i++)
    {
        for(int s=0;s<q;s++)
        {
            cin >> w[s][i];
            j+=w[s][i];
        }
    }
    
    sort(j.begin()+q , j.end());
    int c=0;
    for(int i=q;i<=1.5*q;i++)
    {
        swap(j[i], j[q*2-1-c]);
        c++;
    }
    for(int i=0;i<(q*2);i+=2)
    {
        cout << (int)(j[i]) << " " << ((int)j[i+1]) << endl;
        
    }


    
}