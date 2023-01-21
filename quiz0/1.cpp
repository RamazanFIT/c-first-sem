#include <bits/stdc++.h>

using namespace std;

int main()
{
    char q;
    cin >> q;
    string a;
    cin >> a;
    a+=" *";
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=q) cout << a[i];
    }

}