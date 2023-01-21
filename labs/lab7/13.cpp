#include <bits/stdc++.h>

using namespace std;

int haha(int q, int a)
{
    if(a<=q)
    {
        
    
    cout << a <<" ";
    return haha(q, a+1);
    }
}

int main()
{
    int q;
    cin >> q;
    haha(q, 1);
}