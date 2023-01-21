#include <bits/stdc++.h>

using namespace std;

int haha(int w[], int q)
{
    sort(w, w+q);
    return(w[q-1]-w[0]);
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
    cout <<haha(w, q);
}