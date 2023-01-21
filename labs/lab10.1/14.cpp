#include <bits/stdc++.h>

using namespace std;
int fack(int q)
{
    int k=1;
    while(q!=1)
    {
        k*=q;
        q--;
    }
    return k;
}
int main()
{
    int q;
    cin >> q;
    vector<int> jojo;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        jojo.emplace(jojo.end(), x);
    }
    vector<int> :: iterator it;
    it = unique(jojo.begin(), jojo.end());
    jojo.erase(it, jojo.end());
    int cnt=0;
    
    while(cnt!=fack(jojo.size()))
    {
        for(int i=0;i<jojo.size();i++)
        {
            cout << jojo[i] << " ";
        }
        cout << endl;
        next_permutation(jojo.begin(), jojo.end());
        cnt++;
    }
}