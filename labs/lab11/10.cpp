#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    map <string, int> jojo;
    int x;
    string s;
    vector<pair<string, int>> roma;
    for(int i=0;i<q;i++)
    {
        
        cin >> s;
        cin >> x;
        pair <string, int> roma1(s, x);
        bool flag = false;      
        // cout << roma1.second << roma1.first;
        for(int c=0;c<roma.size();c++)
        {
            if((roma1.first == roma[c].first) && (roma1.second == roma[c].second)) {roma.emplace(roma.end(), roma1);flag = true;}
        }
        if(flag != true) jojo[s]++; 
        
        

    }
    map <string, int> :: iterator it;
    for(it = jojo.begin();it!=jojo.end();it++)
    {
        if((it->second) >=3) cout << it->first <<" " << "+1" << endl;
        else cout << it->first <<" " << "NO BONUS" << endl;

    }   
}