#include <bits/stdc++.h>
using namespace std;


int main()
{
    int q;
    cin >> q;
    vector <int> jojo;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        jojo.insert(jojo.end(), x);
    }
    int right =1;
    int left =0;
    pair <int, int> area[q];
    for(int i=0;i<q;i++)
    {
        for(int s=i+1;s<q;s++)
        {
            if(jojo[i] <=jojo[s]) right++;
            else break;
        }
        // if(i == 0) continue;
        for(int k=i-1;k>=0;k--)
        {
            
            if(jojo[i] <= jojo[k]) right++;
            // if(jojo[i]<=jojo[k]) left++;
            else break;
        }
        area[i] = {jojo[i], right};
        right =1;
        // left =0;
        // 0 0 0 0 0

    }

    for(int i=0;i<q;i++)
    {
        cout << area[i].first <<" " << area[i].second << endl;
    }
    
    // int maxarea = -1;
    // for(int i=0;i<q;i++)
    // {
    //     maxarea = max(maxarea, area[i].first*area[i].second);
    // }
    // cout << maxarea;

}