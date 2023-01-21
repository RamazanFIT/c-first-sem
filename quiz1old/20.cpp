#include <bits/stdc++.h>
using namespace std;


 void rec(int q)
{
    
    int k = q/10;
    if(q == 0) return;
    rec(k);
    cout << q%10 << " ";

    
    
    

}



int main()
{
    int q;
    cin >> q;

    rec(q);
}