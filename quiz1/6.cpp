#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    int x;
    cin >> x;
    int a=0, s = q-1;
    int c;
    while(true)
    {
        c = (a + s)/2;
        if(a - s <= -1)
        {
            cout <<"netu";
            return 0;
        }
        
        if(x > w[c])
        {
            a = c;

        }
        if(x < w[c])
        {
            s = c;
        }
        if(x==w[c])
        {
            cout << w[c];
            return 0;
        }

    }
}