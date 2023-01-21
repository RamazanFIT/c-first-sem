#include <bits/stdc++.h>

using namespace std;






int main()
{
    int q;
    cin >> q;
    vector <string> jojo;
    vector <int> qwert;
    string a;
    int z;
    set <string> roma;
    for(int i=0;i<q;i++)
    {
        cin >> a;
        cin >> z;
        jojo.insert(jojo.end(), a);
        qwert.insert(qwert.end(), z);
        roma.insert(roma.end(), a);
    }
    vector <string> dorama;
    for(auto i = roma.begin();i!=roma.end();i++)
    {
        dorama.insert(dorama.end(), *i);
    }
    int k=0;
    for(int i=0;i<dorama.size();i++)
    {
        for(int s=0;s<jojo.size();s++)
        {
            if(dorama[i] == jojo[s]) k+=(qwert[s]);
        }
        cout << dorama[i] << " " << k << endl;
        k=0;
    }

}