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
    vector <int> joke;
    // if(jojo.size()>roma.size()) joke.emplace(joke.end(), jojo[0]);
    // jojo.erase(jojo.begin());
    for(int i=0;i<jojo.size();i++)
    {
        
        joke.emplace(joke.end(), jojo[i]);

        if(i >=roma.size()) continue;

        joke.emplace(joke.end(), roma[i]);
    }
    auto it = unique(joke.begin(), joke.end());
    for(auto it1=joke.begin();it1!=it;it1++)
    {
        cout << *it1 <<" ";
    }
}