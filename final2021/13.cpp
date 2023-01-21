#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<pair<int, int>> jojo;

    vector<int> roma;
    for(int i=2;i<q;i++)
    {
        bool boolka = true;
        for(int s=2;s<=sqrt(i);s++)
        {
            if(i%s == 0) boolka = false;
        }
        if(boolka) roma.emplace(roma.end(), i);
    }
    for(int i=0;i<roma.size();i++)
    {
        for(int s=i+1;s<roma.size();s++)
        {
            if(roma[i]+roma[s] == q)
            {
                pair<int, int> akk1(roma[i], roma[s]);
                pair<int, int> akk2(roma[s], roma[i]);
                jojo.emplace(jojo.end(), akk1);
                jojo.emplace(jojo.end(), akk2);
            }
        }
    }
    sort(jojo.begin(), jojo.end());
    cout << jojo[0].first <<" " << jojo[0].second;
    return 0;
}