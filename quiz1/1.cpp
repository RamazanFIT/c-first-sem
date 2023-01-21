#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string w[q*2];
    string a = "BbIiEePp";
    int k = 'A' - 'a';
    for(int i=0;i<q*2;i++)
    {
        cin >> w[i];
        for(int s=0;s<w[i].size();s++)
        {
            if(w[i][s] >='A' && w[i][s] <='Z')
            {
                w[i][s] = w[i][s] - k;
            }
        }
    }
    bool flag = true;
    for(int i=0;i<q*2;i+=2)
    {
        if(w[i].size() != w[i+1].size())
        {
            cout <<"NO" << endl;
            continue;
        }
        for(int s=0;s<w[i].size();s++)
        {
            if(a.find(w[i][s]) >0 && a.find(w[i+1][s]) >0 ) continue;
            if(w[i][s] != w[i+1][s]) 
            {
                
                flag = false;


            }
            
        }
        if(flag) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
        flag = true;
    }
    
}