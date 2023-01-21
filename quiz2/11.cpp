#include<bits/stdc++.h> 
using namespace std; 
int main() 
{
    string q;
    cin >> q;
    string a;
    int c=0;
    string z;
    string k[100];
    string l[100];
    for(int i=0;i<q.size();i++)
    {
        if(q[i])
    }

    for(int i=0;i<q.size();i++)
    {
        if(q[i] <='9' && q[i]>='0')
        {
            a+=q[i];
        }
        else{
            for(int s=0;s<a.size();s++)
            {
                c+=((a[s]-'0')*pow(10, a.size()-s-1));
            }
            if(c%10 != (a[a.size()-1]-'0')) c++;
            
            while(c>0)
            {
                z+=(char)((c%2+'0'));
                c/=2;
                
            }
            c=0;
            reverse(z.begin(), z.end());
            cout << z;
            cout <<q[i];
        }

    }
}