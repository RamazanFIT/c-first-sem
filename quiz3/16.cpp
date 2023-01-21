#include <bits/stdc++.h>
using namespace std;


bool foo(int x, int w[], int q)
{
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(w[i] + w[s] == x)
            {
                return 1;

            }
        }
    }
    return 0;
}





int main()
{
    int q;
    cin >> q;
    int x;
    cin >> x;
    int w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];

    }
    if(foo(x, w, q )) cout <<"YES";
    else cout <<"NO";

}