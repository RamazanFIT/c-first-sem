#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    sort(w, w+q);
    bool k =true;
    for(int i=0;i<q-1;i++)
    {
        if(w[i] == w[i+1])
        {
            k = false;
        }
    }
    if(k)
    {cout <<"YES"; return 0;}
    else{
        cout <<"NO";
    }

    
}