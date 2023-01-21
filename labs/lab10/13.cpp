#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair <int, int> jojo[999/2];
    int i=0;
    int x;
    int max1=-1;
    while(x!=0)
    {
        cin >> x;
        jojo[i] = {x, i};
        i++;
        max1 = max(max1, x);
    }
    sort(jojo, jojo+i);
    // int y;
    // for(int s=0;s<i;s++)
    // {
    //     if(max1 == jojo[s].first) 
    //     {
    //         y = jojo[s].second;
    //     }
    // }
    // cout << jojo;
    cout << jojo[i-1].second-jojo[i-2].second;


}