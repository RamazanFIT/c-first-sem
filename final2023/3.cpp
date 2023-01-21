#include <bits/stdc++.h>

using namespace std;

string nts(int q)
{
    string a;
    while(q!=0)
    {
        a+=(q%10+'0');
        q/=10;
    }
    reverse(a.begin(), a.end());
    return a;
}







int main()
{
    string q;
    int cnt=0;
    cin >> q;

    while(q.size()!= 1)
    {
        int a=0;
        for(int i=0;i<q.size();i++)
        {
            a+=(q[i]-'0');
        }
        q = nts(a);
        cnt++;
    }
    cout << q <<" " << cnt;
    
}