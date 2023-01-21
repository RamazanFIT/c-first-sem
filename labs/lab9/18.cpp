#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> jojo;
    int a;

    for(int i=0;i<q;i++)
    {
        cin >> a;
        jojo.emplace(jojo.end(), a);
    }
    // int z=0;
    
    // pair <int, int> roma[1000];
    // for(int i=0;i<jojo.size();i++)
    // {
    //     for(int s=0;s<jojo.size();s++)
    //     {
    //         if(i==s) continue;
            
    //         if(i<s<=q)
    //         {
    //             roma[z] = {i, s};
               
                
    //             z++;
    //         }
    //     }
    // }

    // for(int i=0;i<z;i++)
    // {
    //     cout << roma[i].first <<" " << roma[i].second << endl;
    // }
    // bool flag = false;
    // int cnt=0;
    vector <int> XOR;
    // for(int i=0;i<z;i++)
    // {
    //     XOR.emplace(XOR.end(),  roma[i].first ^ roma[i].second);

    // }
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            XOR.emplace(XOR.end(),(jojo[i] ^ jojo[s]));
        }
    }
    int cnt=0;
    XOR.erase(unique(XOR.begin(), XOR.end()), XOR.end());
    for(int i=0;i<XOR.size;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(XOR[i] == jojo[s] )
            {
                cnt++;
                
            }
        }
    }
    cout << cnt;
    // уже читерский переписать код заново
    
}