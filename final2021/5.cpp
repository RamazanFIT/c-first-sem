#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;

    // 0 0 0 0
    // 0 0 0 0
    // 0 0 0 0
    // 0 0 0 0
    int cnt=0;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(i+s==q-1)
            {
                cnt++;
                cout << cnt;
            }
            else cout << '.';
        }
        cout << endl;
    }
}