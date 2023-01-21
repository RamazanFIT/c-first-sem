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
    int u;
    cin >> u;
    cout << jojo.size() << endl;
    for(int i=jojo.begin();i<jojo.end();i++)
    {
        if(jojo[i]<u) jojo.erase(jojo.begin()+i);
    }
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] <<" ";
    }
}