#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    set <int> jojo;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        if(x%2 != 0){
        jojo.insert(jojo.end(), x);}
    }
    set <int> :: iterator i = jojo.begin();
    for(i;i!=jojo.end();i++)
    {
        cout << *i <<" ";
    }
    
}