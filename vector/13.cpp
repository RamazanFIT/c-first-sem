#include <bits/stdc++.h>

using namespace std;
// здесь код медленный просто;
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
    for(int i=0;i<q;i++)
    {
        if(jojo[i]%2 == 0) jojo.erase(jojo.begin()+i);
    }
    set <int> muk;
    for(int i=0;i<jojo.size();i++)
    {
        muk.insert(jojo[i]);
    }
    for(auto i = muk.begin();i!=muk.end();i++)
    {
        cout << *i << " ";
    }

}