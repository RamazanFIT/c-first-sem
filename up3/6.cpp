#include <bits/stdc++.h>

using namespace std;

bool check(char q)
{
    if(q >='0' && q<='9' || q >='A' && q<='Z') return 0;
    else return 1;
}






int main()
{
    string q;
    cin >> q;
    for(int i=0;i<q.size();i++)
    {
        if(check(q[i])) cout << q[i];
    }
}