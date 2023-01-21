#include <bits/stdc++.h>

using namespace std;

bool comp(vector<int> a, vector<int> b)
{
    int sum1=0, sum2=0;
    for(int i=0;i<a.size();i++)
    sum1+=a[i];
    for(int i=0;i<b.size();i++)
    sum2+=b[i];
    if(sum1<sum2) return true;
    if(sum1 == sum2) 
    {
        if(a.size() < b.size()) return true;
        else return false;

    }
    else return false;

}








int main()
{
    vector<vector<int>> jojo;
    int q;
    cin >> q;
    
    for(int i=0;i<q;i++)
    {
        int x;
        cin >> x;
        vector<int> roma(x);
        for(int s=0;s<x;s++)
        {
            cin >> roma[s];
        }
        jojo.emplace(jojo.end(), roma);
    }
    sort(jojo.begin(), jojo.end(), comp);
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<jojo[i].size();s++)
        {
            cout << jojo[i][s] <<" ";

        }
        cout << endl;
    }

}