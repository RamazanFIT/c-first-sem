#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <string> jojo;
    vector <string> ku;
    int q;
    cin >> q;
    string x;

    for(int i=0;i<q;i++)
    {
        cin >> x;
        ku.insert(ku.end(), x);
        jojo.insert(x);

    }
    vector <string> kaq;
    for(auto i = jojo.begin();i!=jojo.end();i++)
    {
        kaq.insert(kaq.end(), *i);
    }

    
    bool flag = true;
    for(int i=0;i<ku.size();i++)
    {
        for(int s=0;s<kaq.size();s++)
        {
            if(ku[i] == kaq[s])
            {
                cout << "new user added" << endl;
                kaq.erase(kaq.begin()+s);
                flag = false;
            }
        }
        if(flag) cout << "user already exists" << endl;
        flag = true;
    }

}