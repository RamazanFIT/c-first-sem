#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    getline(cin , q);
    q+=" (";
    string a;
    vector <string> jojo;

    for(int i=0;i<q.size()-1;i++)
    {
        if(q[i]>='0') a+=q[i];
        else
        {
            jojo.emplace(jojo.end(), a);
            a.clear();
        }
    }
    bool flag = true;
    for(int i=0;i<jojo.size();i++)
    {
        for(int s=0;s<jojo[i].size();s++)
        {
            if(jojo[i][s] >='0' && jojo[i][s] <='9') flag = false;
        
        }
        if(flag) cout << jojo[i] <<endl;
        flag = true;
    }
}