#include <bits/stdc++.h>

using namespace std;

int haha(char q)
{
    int k = 'A' - 'a';
    if(q>='a' && q<='z')
    {
        cout << char(q + (k));
    }
    if(q>='A' && q<='Z')
    {
        cout << char(q - (k));
    }
}



int main()
{
    char q, a;
    cin >> q;
    haha(q);
}