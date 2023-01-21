#include <bits/stdc++.h>

using namespace std;


bool isTruth(string q)
{
    for(int s=0;s<q.size();s++)
        {
            if(q[s] >='0' && q[s]<='9')
            {
                return false;

            }
        }

    return true;
}
int main()
{
    string q;
    getline(cin, q);
    string w[q.size()];
    int z=0;
    q+=" -";
    for(int i=0;i<q.size();i++)
    {
        if(q[i] !=' ')
        {
            w[z]+=q[i];
            
        }
        else{
            z++;
            continue;
        }
    }
    bool flag = true;
    for(int i=0;i<z;i++)
    {
        
        if(isTruth(w[i]))
        {
            cout << w[i] << endl;
        }
       
    }
}