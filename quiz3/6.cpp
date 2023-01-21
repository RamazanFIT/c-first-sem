#include <bits/stdc++.h>

using namespace std;

int main()
{

    int q;
    cin >> q;
    string a[q];
    char w[8][8];
    for(int i=0;i<8;i++)
    {
        for(int s=0;s<8;s++)
        {
            w[i][s] = '0';
        }
    }
    for(int i=0;i<q;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<q;i++)
    {
        w[a[i][0]-'A'][a[i][1]-'0'-1] = '*';
    }
    for(int i=0;i<8;i++)
    {
        for(int s=0;s<8;s++)
        {
            cout << w[i][s];
        }
        cout << endl;
    }
}