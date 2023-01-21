#include <bits/stdc++.h>

using namespace std;

string Doka(string a, int q)
{
    string altyn;
    for(int i=0;i<a.size();i++)
    {
        if(a[i] + q >90)
        {
            // 0 0 0 3 0 0 0 1 1 1 1 1 
            int z = q- (90 - a[i]+1);
            altyn+=(65+z);
        }
        else
        {
            // A_B_C_D
            altyn+=(a[i]+q);
        }
    }
    return altyn;
    
}





int main()
{
    int q;
    cin >> q;
    string a;
    cin >> a;
    cout << Doka(a, q);
}