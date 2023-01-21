#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
   
    vector<vector<int>> jojo;

    for(int i=0;i<q;i++)
    {
        vector<int> roma(q);
        for(int s=0;s<q;s++)
        {
            cin >> roma[s];
        }
        jojo.emplace(jojo.end(), roma);
    }

    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(jojo[i][s] != jojo[s][i])
            {
                cout <<"NO";
                return 0;
            }
        }
    }

    cout <<"YES";


}