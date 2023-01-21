#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    getline(cin, q);
    q+=" (";
    string h;
    map <string, int> jojo;
    
    for(int i=0;i<q.size();i++)
    {
        if(q[i] != ' ') h+=q[i];
        else{
            jojo[h]++;
            h.clear();
        }

    }
    // vector <pair<string, int>> roma;
    // for(auto i : jojo)
    // {
    //     // cout << i.first << " : " << i.second << endl;
    //     pair <int, string> ioio(i.second, i.first);
    //     roma.emplace(ioio);

    // }
    // sort(roma.begin(), roma.end());
    // reverse(roma.begin(), roma.end());
    

    // for(auto it : roma)
    // {
    //     cout << it.second << " : " << it.first << endl;
    // }
    // unordered_multimap <int, string> :: iterator it;
    // for(it=roma.begin();it!=roma.end();it++)
    // {
    //     cout << it ->second << " : " << it->first << endl;
    // }
    h.clear();
    for(int i=0;i<q.size();i++)
    {
        if(q[i] != ' ') h+=q[i];
        else{
            for(auto it1 : jojo)
            {
                if(h == it1.first)
                {
                    cout << it1.first << " : " << it1.second << endl;
                }
            }
            h.clear();
        }

    }
}