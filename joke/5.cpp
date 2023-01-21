#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    int c=0;
    for(int i=1;i<q.size();i++)
    {
        c+=(q[i]-'0');
    }
    if(c%10== ((q[0] - '0')))
    {
        cout << "YES";
    }
    else{
        cout <<"NO";
    }
}