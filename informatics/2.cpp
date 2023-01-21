#include <bits/stdc++.h>

using namespace std;

int roma(int q)
{
    int k= 2*q;
    if(q == 0 || q == 1) return 1;
    return(2*roma(q) - roma(k));
}



int main()
{   
    int q;
    cin >> q;
    cout << roma(q);
}

// 1 => 1;
// 2 => 2
// 3 => 0 0 0 4
// 4 => 0 0 0 0 7