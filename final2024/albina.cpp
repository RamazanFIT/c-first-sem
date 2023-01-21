#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    string :: iterator it;

    // string * it;
    sort(q.begin(), q.end());
    *it = unique(q.begin(), q.end());
    q.erase(it, q.end());
    // for(int i)
    cout << q;
    
}