//hanoi town
#include <bits/stdc++.h>
using namespace std;

int hanoi(int q)
{
    if(q == 0)
    {
        return 0;
    }
    if(q == 1)
    {
        return 1;
    }
    
    return(2*hanoi(q-1) + 1);
}


int main()
{
    int q;
    cin >> q;
    cout << hanoi(q);
}