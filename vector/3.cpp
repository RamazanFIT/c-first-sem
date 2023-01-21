#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector <int> jojo;
    int c;

    for(int i=0;i<q;i++)
    {
        cin >> c;
        jojo.push_back(c);
    }
    int x;
    cin >> x;
    jojo.erase(jojo.begin()+x, jojo.begin()+x+1);
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] <<" ";
    }
}