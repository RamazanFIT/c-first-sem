#include <bits/stdc++.h>
using namespace std;



string funk(int q)
{
    string k;
    while(q>0)
    {
        k+=(char)(((q%2)+'0'));
        q/=2;
        
    }
    reverse(k.begin(), k.end());
    return k;
}

int ing(string q)
{
    int k=0;
    for(int i=0;i<q.size();i++)
    {
        k+=((q[i]-'0')*pow(10, q.size()-1-i));
    }
    if((q[q.size()-1]-'0') != (k%10)) k++;
    return k;
}

int main()
{
    string q;
    cin >> q;
    string k;
    string w[1000];
    int z=0;
    string t[1000];
    int v=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] <'0' || q[i] >'9')
        {
            t[v]+=q[i];
            
            
        }
        else{
            v++;
            continue;
        }
        
    }
    string h[1000];
    int p=0;
    for(int i=0;i<v;i++)
    {
       if(t[i].size()!=0)
       {
            h[p] = t[i];
            p++;
       }
    }
    
    string m =q;
    m+='^';

    for(int i=0;i<m.size();i++)
    {
       

        if(m[i] >='0' && m[i] <='9')
        {
            k+=(m[i]);
        }
        if((m[i] <'0' || m[i] >'9') && (k.size()>=1)){
            w[z]=funk(ing(k));
            z++;
            k.erase(0, k.size());
        }
        
    }
    int c=max(z,p);
    int l=0;
    string b;
    if(q[0] >'9' || q[0] <'0')
    {
        while(l<=c)
        {
            b+=h[l];
            b+=w[l];
            l++;
        }
        cout << b;
    }
    else{
        while(l<=c)
        {
            b+=w[l];
            b+=h[l];
            l++;
        }
        cout << b;
    }
    
    
    
}