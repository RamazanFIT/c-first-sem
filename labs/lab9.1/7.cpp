#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector <string> jojo;
    vector <string> passw1;
    int a;
    
    vector <string> roma;
    vector <string> passw2;
    string x, y;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        cin >> y;
        jojo.insert(jojo.end(), x);
        passw1.insert(passw1.end(), y);

    }
    cin >> a;
    bool flag1 = false;
    bool flag2 = false;
    for(int i=0;i<a;i++)
    {
        cin >> x;
        cin >> y;
        for(int s=0;s<roma.size();s++)
        {
            if(x == roma[s] && y == passw1[s])
            {
                flag1 = true;
                exit;
            }
            if(x == roma[s]) {flag2 = true; exit;}
            
        }
        
        if(flag1)
        {
            roma.insert(roma.end(), "correct password");
            flag1 = false, flag2 = false ;continue;
        }
        if(flag2)
        {
            roma.insert(roma.end(), "password error");
            flag1 = false, flag2 = false ;continue;
        }
        if(flag2 == false)
        {
            roma.insert(roma.end(), "login error");
            flag1 = false, flag2 = false ;continue;
        }
        
    }
    for(int i=0;i<roma.size();i++)
    {
        cout << roma[i] << endl;

    }
}