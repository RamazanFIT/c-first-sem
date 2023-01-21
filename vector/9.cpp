#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string a;
    int x;

    for(int i=0;i<q;i++)
    {
        cin >> x;
        a+=(char(x+'0'));
    }
    int y;
    cin >> y;
    
    if(a.find(char(y+'0')) != -1)
    {
        cout << "Yes";
    }
    else{
        cout <<"No";
    }
}