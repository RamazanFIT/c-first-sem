#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<string> jojo;
    vector<int> akk;
    string x; int y;
    for(int i=0;i<q;i++)
    {
        cin >> x >> y;
        jojo.emplace(jojo.end(), x);
        akk.emplace(akk.end(), y);
    }
    sort(jojo.begin(), jojo.end());
    sort(akk.begin(), akk.end());
    for(int i=0;i<q;i++)
    {
        cout << jojo[i] <<" " << akk[i] << endl;
    }
}