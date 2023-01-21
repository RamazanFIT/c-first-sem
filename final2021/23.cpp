#include <bits/stdc++.h>
//FENCE
using namespace std;

int main()
{
    int q;
    cin >> q;
    // vector<int> jojo;
    int cnt=0;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        if(q<x) cnt++;
    }

    cout << cnt;
}