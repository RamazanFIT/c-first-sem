#include <bits/stdc++.h>

using namespace std;

int FIB(int q)
{
    if(q == 1 || q == 2) return 1;
    return(FIB(q-1) + FIB(q-2));
    
}





int main()
{   
    int q;
    cin >> q;
    cout << FIB(q);
}