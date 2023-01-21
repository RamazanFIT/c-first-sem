#include <bits/stdc++.h>

using namespace std;
int q, a;
char jojo[1000][1000];


int lub(int x, int y)
{
    if(jojo[x][y] == 0 || jojo[x][y] == '#') return 0;
    if(x < 0 || y < 0) return 0;
    if(x >= q || y >= a) return 0;
    if(x == q-1 && y == a-1) return 1;
    jojo[x][y] = 0;
    
    return(lub(x, y+1)+lub(x, y-1)+lub(x+1, y)+lub(x-1, y));
}




int main()
{
    cin >> q >> a;

    for(int i=0;i<q;i++)
    {
        for(int s=0;s<a;s++)
        {
            cin >> jojo[i][s];
        }
    }
    int k = lub(0, 0);
    if(k>=1) cout << "YES";
    else cout <<"NO";
}