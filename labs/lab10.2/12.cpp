#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector <int> Doka(q);
    for(int i=0;i<q;i++)
    {
        cin >> Doka[i];
    }
    vector <int> Roma;
    Roma = Doka;
    reverse(Roma.begin(), Roma.end());
    for(int i=0;i<q;i++)
    {
        if(Roma[i] == Doka[i]) cout << "OK" << endl;
        else cout << "Instead of " << Doka[i] << " here was " << Roma[i] << endl;
    }
}