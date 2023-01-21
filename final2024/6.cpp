#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    // map<string, string> Albina;
    vector<map<string, string>> jojo;
    for(int i=0;i<q;i++)
    {
        map<string, string> Albina;
        string a;
        cin >> a;
        int z;
        cin >> z;
        for(int s=0;s<z;s++)
        {
            string h;
            cin >> h;
            Albina[h] = a;
        }
        jojo.emplace(jojo.end(), Albina);

    }

    int town;
    cin >> town;
    vector<string> roma;
    for(int i=0;i<town;i++)
    {
        string f;
        cin >> f;
        bool boolka = false;
        for(int s=0;s<jojo.size();s++)
        {
            
            if(jojo[s].find(f) != jojo[s].end()) {roma.emplace(roma.end(), jojo[s][f]);boolka = true; break;}
            

        }
        if(boolka) continue;
        roma.emplace(roma.end(), "Unknown");
    }
    for(int i=0;i<roma.size();i++)
    {
        cout << roma[i] << endl;
    }


}