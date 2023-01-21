#include <bits/stdc++.h>

using namespace std;

int main() // rotate // unique
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

    // for(int i=0;i<jojo.size();i++) cout << jojo[i] <<" ";

    // int k = distance(jojo.begin(), it);
    // k--;
    // for(int i=0;i<jojo.size();i++)
    // {
    //     for(auto s=jojo.begin();s!=jojo.end();s++)
    //     {
    //         cout << *s << " " ;
    //     }
    //     cout << endl;
    //     rotate(jojo.begin(), jojo.begin()+1, jojo.end());
    // }
    if(jojo.size() == 1)
    {
        cout << jojo[0];
        return 0;

    }
    if(jojo.size() == 2)
    {
        cout << jojo[0] <<" " << jojo[1] << endl << jojo[1] <<" " << jojo[0];
        return 0;
    }
    for(int i=0;i<jojo.size();i++)
    {
        for(int s=0;s<jojo.size();s++)
        {
            if(i == s) continue;
            for(int j=0;j<jojo.size();j++)
            {
                if(j == s || j == i) continue;
                cout << jojo[i] <<" " <<jojo[s] <<" " <<jojo[j] << endl;
            }
        }
    }
}

