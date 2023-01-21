#include <bits/stdc++.h>

using namespace std;

char jojo(char q)
{
    int k='A'-'a';
    int a = 'a';
    int s = 'z';
    if(q>=a && q<s) return(char(q+k));
    if(q<a || q>s) return(char(q-k));
}









int main()
{
    char q;
    cin >> q;
    cout << jojo(q);
}