#include <bits/stdc++.h>

using namespace std;

char akk(char a, char b)
{
    //-11-1--1-1-1-1-1-1--11-1--11
    int k = 'z';
    // if(a-'a'+b>k) return(char());
    if(a-'a'+b>k) return(char(b+a-'z'-1));



    // return(char(a-'a'+b));
}






int main()
{
    string q;
    string a;
    cin >> q >> a;
    int cnt=0;
    string z;

    for(int i=0;i<q.size();i++)
    {
        if(cnt == a.size()) cnt = 0;
        
        // z+=(akk(q[i], a[cnt]));
        if(q[i]>=a[cnt]) z+=(akk(q[i], a[cnt]));
        else z+=(akk(a[cnt], q[i]));



        cnt++;
    }
    cout << z;
}