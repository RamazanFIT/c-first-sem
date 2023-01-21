#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> jojo{1, 2, 3, 4,4, 4, 5, 6,7,7, 7};
    vector<int> :: iterator k;
    k = unique(jojo.begin(), jojo.end());
    rotate(jojo.begin(), jojo.begin()+2, k);
    for(auto it=jojo.begin();it!=k;it++)
    {
        cout << *it <<" ";
    }
}