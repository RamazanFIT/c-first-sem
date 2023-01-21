#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector <string> jojo;
    string a;
    for(int i=0;i<q;i++)
    {
        cin >> a;
        jojo.emplace(jojo.end(), a);
        
    }
    // string b;
    int k;
    for(int i=0;i<q;i++)
    {
        k = jojo[i].find("@gmail.com");
        if(k != -1) 
        {
            
            cout << jojo[i].substr(0, k) << endl;
        }
    }

}