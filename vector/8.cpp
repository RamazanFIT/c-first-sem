#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector <int> jojo;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        jojo.insert(jojo.end(), x);
    }
    int c;
    cin >> c;
    for(int s=0;s<c;s++)
    {int y = 99999;
    int pos;
    for(int i=0;i<jojo.size();i++)
    {
        if(y>jojo[i]) {y = jojo[i], pos = i;}
        
    }
    cout << y <<" ";
    jojo.erase(jojo.begin()+pos);}

}