#include <bits/stdc++.h>

using namespace std;

string check(string q)
{
    int cnt1=0, cnt2=0,cnt3=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] >='0' && q[i]<='9') cnt3++;
        if(q[i] == '1') cnt1++;
        if(q[i] == '0') cnt2++;
    }
    if((cnt1 == 1) && (cnt3==1)) return "true";
    if((cnt2 == 1) && (cnt3 == 1)) return "false";
    return q;
    
    
}









int main()
{
    string q;
    cin >> q;
    cout << check(q);
}