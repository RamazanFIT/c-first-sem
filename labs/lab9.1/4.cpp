#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <string> jojo;
    string x;
    cin >> x;
    jojo.insert(jojo.end(), x);
    x = jojo.size();
    for(auto i=jojo.begin();i<=jojo.end();i++)
    {
        if(*i == *(i+1))
        {
            jojo.erase(i);
            jojo.erase(i+1);
            cout <<"roma";
        }
    }
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i];
    }
}