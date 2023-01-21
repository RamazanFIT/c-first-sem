#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<vector<int>> jojo;

    int x;
    for(int i=0;i<q;i++)
    {
        vector <int> roma(q);
        for(int s=0;s<q;s++)
        {
            cin >> roma[s];
            // cin >> q;
            
        }
        jojo.emplace(jojo.end(), roma);
    }

    for(int i=0;i<q;i++)
    {
        for(int s=q-1;s>=0;--s)
        {
            cout << jojo[s][i] <<" ";
        }
        cout << endl;
    }

}