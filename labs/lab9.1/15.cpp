#include <bits/stdc++.h>
#define fr(i, q) for(int i=0;i<q;i++)
#define F first
#define S second
using namespace std;

int main()
{
    int q;
    cin >> q;
    pair<string, string> jojo[q];
    fr(i, q)
    {
        cin >> jojo[i].F;
        cin >> jojo[i].S;
    }
    int a;
    cin >> a;
    pair<string, string> roma[a];
    fr(s, a)
    {
        cin >> roma[s].F;
        cin >> roma[s].S;
    }
    bool flag = 1;
    fr(i, a)
    {
        fr(s, q)
        {
            if(roma[i] == jojo[s])
            {
                cout << "correct password" << endl;
                flag = false;
                exit;
                
            }
            if((roma[i].F == jojo[s].F) && (roma[i].S != jojo[s].S))
            {
                cout << "password error" << endl;
                flag = false;
                exit;
            }
            

        }
        if(flag)
        {
            cout << "login error" << endl;
            
        }
        flag = true;
        
    }

    
}