#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    map<string, int> jojo;
    
    string s;
    for(int i=0;i<q;i++)
    {
        cin >> s;
        jojo[s]++;
        
    }
    bool flag = true;
    
    for(auto it : jojo)
    {
        if(it.second >= 2) 
        { 
            flag = false;
        }
    }
    if(flag)
    {
        cout << "Understandable, have a great day";
        return 0;
    }
    for(auto it : jojo)
    {
        if(it.second >= 2) 
        { 
            cout << it.first << endl;
        }
    }
    
    

}