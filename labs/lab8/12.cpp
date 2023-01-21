#include <bits/stdc++.h>

using namespace std;


int haha(int w[], int q)
{
    int j[q];
    int z=0;
    sort(w, w+q);
    for(int i=0;i<q;i++)
    {
        if(w[i] == w[i+1])
        {
            continue;
        }
        if((float)(w[i] % 2) != 0)
        {
            cout << w[i] <<" ";
        }
    }
    
    
}




int main()
{
    int q;
    cin >> q;
    int w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    haha(w, q);
}