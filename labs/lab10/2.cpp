#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string x;
    int y;

    vector <string> jojo;
    vector <int> roma;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        cin >> y;
        jojo.insert(jojo.end(), x);
        roma.emplace(roma.end(), y);
    }
    sort(jojo.begin(), jojo.end());
    sort(roma.begin(), roma.end());
    for(int i=0;i<q;i++)
    {
        cout << jojo[i] <<" " << roma[i] << endl;
    }
}