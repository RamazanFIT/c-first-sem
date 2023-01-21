#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    
    for(int i=1;i<=9;i++)
    {
        for(int s=0;s<=9;s++)
        {
            for(int j=0;j<=9;j++)
            {
                if(i+s+j == q)
                {
                    cout << i << s << j <<endl;
                }
            }
        }
    }
}