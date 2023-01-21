#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q, a;
    cin >> q >> a;
    string k="";
    int m;
    int cnt=0;
    vector<string> jojo;
    for(int i=0;i<a.size();i++)
    {
        for(int s=i+1;s<=a.size();s++)
        {
            jojo.emplace(jojo.end(), a.substr(i, s));
        }
    }

    for(int i=0;i<jojo.size();i++)
    {
        if(q.find(jojo[i]) != -1)
        if(k.size()<jojo[i].size())
        {
            k = jojo[i];
        }
        
    }
    // cout << k;
    // m = a.find(k);
    // cout << k << endl;
    a.erase(a.begin(), a.begin()+k.size());

    cout << q << a;
    // cout << a;
    


}