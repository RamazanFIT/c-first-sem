#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <int> jojo;
    int q;
    cin >> q;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        jojo.insert(jojo.end(), x);
    }
    cout << jojo.size();
}