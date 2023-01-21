#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
        

    string j;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<w[i].size();s++)
        {
            if(w[i][s] == '0') continue;
            j+= w[i][s];
            
        }
    }
  
    for(int i=0;i<j.size();i++)
    {
        if(j[i] != j[j.size()-1-i])
        {
            cout << "NO";
            return 0;
        }
        
    }
    cout <<"YES";
}