#include <bits/stdc++.h>

using namespace std;

bool roma(int q)
{
    for(int i=2;i<q;i++)
    {
        if(q % i == 0) return 0;
    }
    return 1;
}



int main()
{
    int q;
    int a;
    cin >> q >> a;
    int c;
    cin >> c;
    vector <int> jojo;
    int min1 = min(q, a);
    vector <int> common;
    for(int i=1;i<=min1;i++)
    {
        // if(roma(i)) common.emplace(common.end(), i);
        common.emplace(common.end(), i);
    }
    sort(common.begin(), common.end());
    reverse(common.begin(), common.end());
    vector <int> kbtu;
    for(int i=0;i<common.size();i++)
    {
        if(q % common[i] == 0 && a % common[i] == 0) 
        {
            kbtu.emplace(kbtu.end(), common[i]);
        }
    }
    cout << kbtu[c-1];
}