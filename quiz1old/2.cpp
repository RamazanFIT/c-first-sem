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
   
     sort(w, w + z+1);
     for(int i=0;i<z;i++)
     {
        if(w[i] == w[i+1]) cout << w[i] << endl;
     }
    
  

}