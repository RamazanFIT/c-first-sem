#include <bits/stdc++.h>

using namespace std;

int bebra(int w[], int q, int b, int c)
{
    for(int i=0;i<q;i++)
    {
        if(i >=b && i<=c)
        continue;
        cout << w[i] <<" ";
    }
}

int main()
{
    int q;
    cin >> q;
    int w[q];
    for(int i =0;i<q;i++)
    {
        cin >> w[i];
    }
    int a, z;
    cin >> a >> z;

    bebra(w, q, a, z);

}