#include <bits/stdc++.h>
using namespace std;
int w[1001];
int priN(int q)
{
    int flag = true;
    int z=0;
    for(int i=1;i<10000;i++)
    {
        
        for(int s=2;s<i;s++)
        {
            if(i%s == 0) flag = false;
        }
        if(flag){ w[z] = i;
        z++;}
        flag = true;
    }
    return w[q];
}



int main()
{
    int q;
    cin >> q;
    cout << priN(q);
}