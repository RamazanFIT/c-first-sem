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
        jojo.push_back(x);
    }
    int a, b;
    cin >> a >> b;
    jojo.erase(jojo.begin()+a, jojo.begin()+b+1);
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] <<" ";
    }
}