#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int cnt=1;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(i+s==q-1)
            {
                cout << cnt;
                cnt++;
            }
            else{
                cout <<'.';
            }
        }
        cout << endl;
    }
    
}