#include <bits/stdc++.h>

using namespace std;

int haha(int w[], int q)
{
    int z=0;
    int j[q];
    sort(w, q+w);
    
    for(int i=0;i<q;i++)
    {
        
        if(w[i] != w[i+1])
        {
            j[z] = w[i];
            z++;
        }
    }
    int sum=0;
    for(int i=0;i<z;i++)
    {
        sum+=j[i];
    }
    return sum;

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
    cout << haha(w, q);
}