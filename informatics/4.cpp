#include <bits/stdc++.h>

using namespace std;

int main()
{
    multimap <int, int> jojo;
    int x;
    int max1=-1;
    int max2=-1;
    int cnt=0;
    while(x!=0)
    {
        cin >> x;
        cnt++;
        jojo.emplace(x, cnt);
        

    }
    // 1 2 3 4 5 6
    for_each(jojo.begin(), jojo.end(), [&] (auto a) 
    {
        if(a.first != max1) 
        {
            max2 = max(max2, a.first);
        }
    });
    int ans = 0;
    for_each(jojo.begin(), jojo.end(), [&] (auto a) 
    {
        if(a.first >=max2) 
        {
            ans = min(a.second )
        }
    });

    
}