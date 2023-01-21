#include<bits/stdc++.h> 
using namespace std; 
int main() 
{
    string q;
    cin >> q;
    int c=0;
    string a;
    string z;
    int k;
    int v=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i]>='0' && q[i]<='9')
        {
            a+=(char)(q[i]);
        }
        else{
            for(int i=0;i<q.size();i++)
            {
                c+=((q[i]-'0')*pow(10, (q.size()-i-1)));
            }
            if((q[q.size()-1]-'0') != c%10) c++;
            while(c>0)
            {
                z+=(char)((c%2+'0'));
                c/=2;
            }
            
        }
        
    
    
    }
    
    
}