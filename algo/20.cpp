#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int A[x*y];

    int cnt = x*y;
    for(int i=0;i<x;i++)
    {
        for(int s=0;s<y;s+=1)
        {
            A[i*y + s] = cnt;
            cnt -= 1;

        }
    }
    for(int i=0;i<x;i++)
    {
        for(int s=0;s<y;s+=1)
        {
            cout << A[i*y + s] <<" ";
        }
        cout << endl;
    }
}