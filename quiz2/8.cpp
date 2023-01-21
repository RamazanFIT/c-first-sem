#include<bits/stdc++.h> 
using namespace std; 
int main() 
{
    string q;
    cin >> q;
    string a;
    int c=0;
    int u = q.size();
    if(q[q.size()-1] >='9' || q[q.size()-1] <='0') q+='"'; 
    for(int i=0;i<q.size();i++)
    {
        if(q[i] <= '9' && q[i] >='1')
        {
            a+=q[i];
        }
        else{
            for(int i=0;i<a.size();i++)
            {
                c+=((a[i]-'0')*pow(10, (a.size()-i-1)));
            }
            if(c%10 != (a[a.size()-1]-'0'))
            {
                c++;
                cout << c << " ";
                c=0;
                a = "";
                
            }
        }
        

    }
   
}