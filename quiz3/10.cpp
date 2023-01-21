#include <bits/stdc++.h>

using namespace std;


bool check(char q)
{
    if(q>='A' && q<='Z') return 1;
    else return 0;
}

char recet(string q)
{
    if(q.size() == 1 && check(q[0]) == 0) return ('0' - '1');
    if(check(q[0])) return (char)(q[0]);
    q.erase(0, 1);
    recet(q);
}


int main()
{
    string q;
    cin >> q;
    cout << recet(q);
}