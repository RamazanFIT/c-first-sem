#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair <int, int> jojo[10000];
    int x;
    // int max1=-1;
    // int max2=-1;
    int cnt =0;
    while(x!=0)
    {
        cin >> x;
        
        jojo[cnt] = {x, cnt};
        cnt++;
        // max1 = max(max1, x);
    }

    // for_each(jojo, jojo+10000, [&]  (auto a) 
    // {
    //     if(a.first != max1) 
    //     {
    //         max2 = max(max2, a.first);
    //     }
    // });
    // 0 0 0 0 0
    sort(jojo, jojo+10000, [] (int a, int b) 
    {
        return(a>b);
    });
    cout << jojo[0].second - jojo[1].second+1;


}