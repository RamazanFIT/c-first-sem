#include <bits/stdc++.h>

using namespace std;

int haha(int w[], int q, int a)
{
    sort(w, w+q);
    for(int i=0;i<a;i++)
    {
        cout << w[i] <<" ";
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
    int a;
    cin >> a;
    haha(w, q, a);
}