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
    int a, b;
    cin >> a >> b;
    jojo.insert(jojo.begin()+a, b);
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] <<" ";
    }
}