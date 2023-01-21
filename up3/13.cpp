#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    getline(cin , q);
    q+=" &";
    vector <string> jojo;
    string a;

    for(int i=0;i<q.size();i++)
    {
        if(q[i] != ' ') a+=(q[i]);
        else
        {
            jojo.emplace(jojo.end(), a);
            a.clear();
        }
    }
    // for(int i=0;i<jojo.size();i++)
    // {
    //     cout << jojo[i] <<" ";
    // }
    for(int i=0;i<jojo.size();i++)
    {
        for(int s=0;s<jojo[i].size();s++)
        {
            if(jojo[i][s] == 'z')
            {
                cout << 'a';
                continue;
            }
            if(jojo[i][s] == 'Z')
            {
                cout << 'A';
                continue;
            }
            if(jojo[i][s] >='a' && jojo[i][s] <='z' || jojo[i][s] >='A' && jojo[i][s] <='Z')
            {
                cout << char(jojo[i][s] + 1);
                continue;
            }
            cout << jojo[i][s];
        }
        cout <<" ";
    }
}