#include <bits/stdc++.h>

using namespace std;
int w[100000];
int main()
{
    
    int x;
    
    while(x!=0)
    {
        cin >> x;
        w[x]++;
        
    }
    for(int i=1;i<10;i++)
    {
        cout << w[i] <<" ";
    }

}