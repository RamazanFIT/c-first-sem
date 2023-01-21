#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> jojo(q);
    for(int i=0;i<q;i++)
    {
        cin >> jojo[i];
    }

    sort(jojo.begin(), jojo.end());

    int cnt=0;
    
    for(int i=jojo[0];i<jojo[jojo.size()-1];i++)
    {
        bool boolka = true;
        for(int s=0;s<jojo.size();s++)
        {
            if(i == jojo[s]) boolka = false;
        }
        if(boolka) cnt++;
    }

    cout << cnt;
}