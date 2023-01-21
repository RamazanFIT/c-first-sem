#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int x;
    int w[3][q];
    for(int i=0;i<2;i++)
    {
        for(int s=0;s<q;s++)
        {
            cin >> w[i][s];

        }
    }
    cin >>x;
    int c=0;
    for(int i=0;i<q;i++)
    {
        if((x>w[1][i] && x<w[0][i]) || (x<w[1][i] && x>w[0][i]))
        {   
            c++;
        }
    }
    cout << c;
}