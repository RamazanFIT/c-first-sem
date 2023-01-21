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
    vector <int> roma;
    for(int i=0;i<q;i++)
    {
        for(int s=i;s<q;s++)
        {
            if(i == s) continue;
            roma.insert(roma.end(), (jojo[i] ^ jojo[s]));
        }
    }
    sort(jojo.begin(), jojo.end());
    
    jojo.erase(unique(jojo.begin(), jojo.end()), jojo.end());
    
    int cnt=0;
    for(int i=0;i<jojo.size();i++)
    {
        for(int s=0;s<roma.size();s++)
        {
            if(jojo[i] == roma[s]) cnt++;
        }
    }
    cout << cnt;
    // разные цифры могут давать одинаковый иксор
}