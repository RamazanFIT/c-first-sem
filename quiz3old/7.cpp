#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    getline(cin, q);
    string w[q.size()];
    int z=0;
    for(int i=0;i<q.size();i++)
    {
        
        if(q[i]!=' ')
        {
            w[z]+=q[i];
            
        }
        else{
            z++;
            continue;

        }
    }
    int k=0;
    int l;
    for(int i=0;i<z+1;i++)
    {
        l = w[i].size();
        k = max(k, l);


    }
    for(int i=0;i<z+1;i++)
    {
        if(w[i].size() == k)
        {
            cout << w[i] << endl;
            cout << k;
        }
    }

}