#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w[4] = {2, 5, 17, 19};
    int q;
    cin >> q;
    int c=0;
    for(int i=0;i<4;i++)
    {
        if(q % w[i] == 0) c++;
    }
    if(c>=2) cout << "YES";
    else cout << "NO";
}