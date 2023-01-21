#include<bits/stdc++.h> 
using namespace std; 
int main() 
{
    string q;
    cin >> q;
    int c=0;
    string a;
    
    for(int i=0;i<q.size();i++)
            {
                c+=((q[i]-'0')*pow(10, (q.size()-i-1)));
            }
            if((q[q.size()-1]-'0') != c%10) c++;
            
    cout << c;

}