#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <string> Korobka;
    string q;
    getline(cin, q);
    string w[q.size()];
    int z=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] != ' ')
        {
            w[z]+=q[i];
        }
        else{
            z++;
            continue;
        }
    }
    bool c = false;
    string v;
    for(int i=0;i<z;i++)
    {
        for(int s=0;s<z;s++)
        {
            
           
            if((v.find(char(s+'0')) != -1) || i == s) continue;
            if(w[i] == w[s]) {c = true, v+=char(s+'0');}

        }
        if(c) Korobka.insert(w[i]);
        c = false;
    }
    
  

}