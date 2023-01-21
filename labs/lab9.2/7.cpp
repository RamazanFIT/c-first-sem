#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    int cnt1=0, cnt2=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] ==')') cnt1++;
        if(q[i] == '(') cnt2++;
    }
    if(cnt1 != cnt2)
    {
        cout <<"NO";
        return 0;
    }

    for(int i=0;i<q.size()/2;i++)
    {
        if(q[i] == q[q.size()-1-i])
        {
            cout <<"NO";
            return 0;
        }
    }
    cout << "YES";
}