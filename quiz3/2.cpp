#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    int z=0;
    string j;
    sort(w, w+q);
    bool k = true;
    for(int i=0;i<q-1;i++)
    {
        if(w[i] == j) continue;
        if(w[i] == w[i+1])
        {
            cout << w[i] << endl;
            j = w[i];
            k = false;
        }
    }
    if(k) cout << "Understandable, have a great day";
    return 0;
}