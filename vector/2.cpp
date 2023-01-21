#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector <int> jojo;
    int k;
    for(int i=0;i<q;i++)
    {
        cin >> k;
        jojo.push_back(k);
    }
    int c, l;
    cin >> c >> l;

    reverse(jojo.begin()+c, jojo.begin()+l+1);
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] <<" ";
    }
}