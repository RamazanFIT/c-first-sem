#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, k;
    cin >> m >> k;
    vector <int> jojo(m);
    vector <int> roma(k);
    for(int i=0;i<m;i++)
    {
        cin >> jojo[i];
    }
    for(int i=0;i<k;i++)
    {
        cin >> roma[i];
    }
    vector <int> :: iterator it1;
    vector <int> :: iterator it2;
    it1 = unique(jojo.begin(), jojo.end());
    it2 = unique(roma.begin(), roma.end());
    jojo.erase(it1, jojo.end());
    roma.erase(it2,roma.end());
    
    // 5 5 4 3 2    5 4 5 5 4 4 3 2   5 4 5 4 3 2
    // 4 5 4 3      4 5 5 5 4 4 3 3 2    3 2 4 3 5 4 4 5 5
    vector <int> both;
    int y = jojo.size()-roma.size();
    if(y>=0) 
    {
        for(int i = 0;i<y;i++)
        {
            both.emplace(both.end(), jojo[i]);
        }
        jojo.erase(jojo.begin(), jojo.begin()+y);
        for(int i=0;i<roma.size();i++)
        {
            both.emplace(both.end(), jojo[i]);
            both.emplace(both.end(), roma[i]);
        }
    }
    else{
            for(int i=0;i<-y;i++)
            {
                both.emplace(both.end(), roma[i]);
            }
            for(int i=0;i<roma.size();i++)
            {
                both.emplace(both.end(), roma[i]);
                both.emplace(both.end(), jojo[i]);
                
            }
            
            
    }
    auto it = unique(both.begin(), both.end());
    for(auto it1 = both.begin();it1!=both.end();it1++)
    {
        cout << *it1 <<" ";
    }
    
    

}