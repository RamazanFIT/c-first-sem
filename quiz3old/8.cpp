#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    string a = q;
    reverse(a.begin(), a.end());
    if(a == q) cout << "yes";
    else cout << "no";

}