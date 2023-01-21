#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, a;
    cin >> q >> a;
    int w[q*a];
    for(int i=0;i<q*a;i++)
    {
       cin >> w[i];
    }
    int x;
    cin >> x;
    sort(w, w+q*a);
    if(x<w[q*a-1])
    {
        cout << "Penalty!";
                return 0;
    }
    
    cout << "No penalty for today.";
}