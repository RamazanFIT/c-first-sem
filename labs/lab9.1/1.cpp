#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector <string> x;
    string h;
    for(int i=0;i<=q;i++)
    {
        getline(cin, h);
        x.insert(x.end(), h);
    }
    sort(x.begin(), x.end());
    for(int i=0;i<x.size();i++)
    {
        cout << x[i] << endl;
    }

}