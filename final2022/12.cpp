#include <bits/stdc++.h>

using namespace std;
//RLFB

// struct akk
// {
//     int R = 1;
//     int L = -1;
//     int F = 1;
//     int B = -1;
// };




int main()
{
    string q;
    cin >> q;
    int x, y;
    cin >> x >> y;
    // akk roma;
    vector<vector<char>> jojo;
    for(int i=0;i<x;i++)
    {
        vector<char> roma;
        for(int s=0;s<y;s++)
        {
            roma.emplace(roma.end(), 'X');
            // jojo[i][s] = 'X';
        }
        jojo.emplace(jojo.end(), roma);
    }
    int ty=0, tx=0;
    jojo[0][0] = '*';
    for(int i=0;i<q.size();i++)
    {
        if(q[i] == 'R')
        {
            ty++;
            jojo[tx][ty] = '*';
        }
        if(q[i] == 'L')
        {
            ty--;
            jojo[tx][ty] = '*';
        }
        if(q[i] == 'U')
        {
            tx--;
            jojo[tx][ty] = '*';
        }
        if(q[i] == 'D')
        {
            tx++;
            jojo[tx][ty] = '*';
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int s=0;s<y;s++)
        {
            cout << jojo[i][s];
        }
        cout << endl;
    }
}