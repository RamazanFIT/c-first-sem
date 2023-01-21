#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair <int, int> jojo[1000];
    int x;
    int max1=-1;
    // int max2=-1;
    int cnt =0;
    int c = 0;
    while(x!=0)
    {
        cin >> x;
        
        jojo[cnt].first = x;
        jojo[cnt].second = c;
        cnt++;
        c++;
        max1 = max(max1, x);
    }

    sort(jojo, jojo+1000);
    cout << jojo[1000-1].second - jojo[1000-2].second;
    // for_each(jojo, jojo+10000, [&]  (auto a) 
    // {
    //     if(a.first != max1) 
    //     {
    //         max2 = max(max2, a.first);
    //     }
    // });
    // 0 0 0 0 0
    // for(int i=0;i<cnt;i++)
    // {
    //     cout << jojo[i].first <<" " << jojo[i].second  << endl;
    // }


}