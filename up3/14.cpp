#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cout << (int)("AA") << endl;
    // cout << (int)('A');
    string q;
    cin >> q;
    int k = 300;
    int cnt=0;
    for(int i=0;i<q.size();i++)
    {
        cnt+=((int)(q[i]));

    }
    if(cnt>=k) cout << "It is tasty!";
    else cout << "Oh, no!";
}