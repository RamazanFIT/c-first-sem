#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    int z=0;
    
    char j[10000000];
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<w[i].size();s++)
        {
            if(w[i][s] == '0') continue;
            j[z] = w[i][s];
            z++;
        }
    }
    int c=0;
    for(int i=0;i<z;i++)
    {
        if(j[i] != j[z-1-c])
        {
            cout << "NO";
            return 0;
        }
        c++;
    }
    cout <<"YES";
}