#include <bits/stdc++.h>

using namespace std;


bool palin(string a)
{
    string b;
    b = a;
    reverse(b.begin(), b.end());
    if(a == b) return 1;
    else return 0;
}



int main()
{
    string q;
    cin >> q;
    sort(q.begin(), q.end());

    do
    {
        if(palin(q)) {cout << "ZA WARUDO TOKI WO TOMARE";return 0;}
    } while (next_permutation(q.begin(), q.end()));


    cout << "JOJO";
    
}