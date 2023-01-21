#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    for(int i=1;i<10;i++)
    {
        for(int s=0;s<10;s++)
        {
            for(int j=0;j<10;j++)
            {
                if(i+s+j == q) cout << i << s << j << endl;
                
            }
        }
    }
}