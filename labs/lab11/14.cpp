#include <bits/stdc++.h>

using namespace std;

// bool comp(pair<int, int> a, pair<int, int> b)
// {
//     if(a.first > b.first) return true;
//     // else if(a.first == b.first) 
//     // if(a.second > b.second) return 1;
//     // else return 0;
// }

bool comp(int a, int b)
{
    if(a > b) return 0;
    else  return 1;

}



int main()
{
    int q;
    cin >> q;
    // vector<pair<int, int>> jojo(q);
    // for(int i=0;i<q;i++)
    // {
    //     cin >> jojo[i].first >> jojo[i].second; 
    // }
    
    // // sort(jojo.begin(), jojo.end(), comp);
    // sort(jojo.begin(), jojo.end(), [&](pair<int, int> a, pair<int, int> b)
    // {
    //     if((a.first < b.first) && a.second < b.second) return 1;
    //     else return 0;
    // });
    // for(auto i : jojo)
    // {
    //     cout << i.first <<" " << i.second << endl;
    // }

    vector <int> jojo(q);
    for(int i=0;i<q;i++)
    {
        cin >> jojo[i];
    }

    sort(jojo.begin(), jojo.end(), comp);
    for(auto i : jojo)
    {
        cout << i << endl;
    }
}
