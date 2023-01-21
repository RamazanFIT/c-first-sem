#include <bits/stdc++.h>

using namespace std;

int haha(string q)
{
    int z=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] >='A' && q[i] <='Z')
        {
            q[i] = q[i] - ('A' -'a');
        }
    }
    
    sort(q.begin(), q.end());
    for(int i=0;i<q.size();i++)
    {


        
        if(q[i] == q[i+1])
        {
            continue;
        }
        z++;
    }
    cout << z << endl;
    for(int i=0;i<q.size();i++)
    {

        
        if(q[i] == q[i+1])
        {
            continue;
        }
        
        cout  << q[i] <<" ";
    }
}


int main()
{
    string q;
    cin >> q;
    haha(q);
    
}