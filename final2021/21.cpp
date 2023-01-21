#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> akk;
    for(int i=0;i<q;i++)
    {
        map<int, int> jojo;
        vector<int> huge;
        bool flag = true;
        int a;
        
        cin >> a;
        
        
        for(int s=0;s<a;s++)
        {
            int x;
            cin >> x;
            jojo[x]++;
            huge.emplace(huge.end(), x);
        }
        int y=-2;
        map<int, int> :: iterator it;
        for(it=jojo.begin();it!=jojo.end();it++)
        {
            if(it->second == 1)
            {
                y = it->first;
                
                break;
            }
        }
        for(int j=0;j<a;j++)
        {
            if(y == huge[j])
            {
                akk.emplace(akk.end(), j+1);
                flag = false;
                break;
            }
        }
        if(flag)
        akk.emplace(akk.end(), -1);
    }
    // cout << akk.size() << endl;
    for(int i=0;i<akk.size();i++)
    {
        if(akk[i] != -1) cout << akk[i] << endl;
        else cout << "ZA WARUDO" << endl;
    }
}