#include <bits/stdc++.h>

using namespace std;

char jojo(char q)
{
    int k='a';
    int n='z';
    int j='A'-'a';
    if(q>=k && q<=n)
    {
        return(char(j+q));
    }
    return(q);
}



int main()
{
    char q;
    cin >> q;
    cout << jojo(q);
    
}