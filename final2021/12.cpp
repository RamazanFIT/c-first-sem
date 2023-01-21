#include <bits/stdc++.h>

using namespace std;


int stn(string q)
{
    long long cnt=0;
    for(int i=0;i<q.size();i++)
    {
        cnt+=((q[i]-'0')*pow(10, q.size()-1-i));
    }
    if(cnt%10 != (*(q.end()-1)-'0')) cnt++;
    return cnt;
}


string ntos(int q)
{
    string a;
    //1102
    while(q != 0)
    {
        a+=(char(q%10+'0'));
        q/=10;
    }
    return a;
}





int main()
{
    int q;
    // string q;
    cin >> q;
    vector<int> jojo;
    string x, y;

    for(int i=0;i<q;i++)
    {
        cin >> x >>  y;

        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());

        int xn, yn;

        xn = stn(x);
        yn = stn(y);

        int z = xn+yn;

        //numb to string

        string t = ntos(z);

        // reverse(t.begin(), t.end());
        // t = stn(t);
        int u = stn(t);
        
        jojo.emplace(jojo.end(), u);
        t.clear();
        z = 0;
        xn = 0;
        yn = 0;

    }

    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] << endl;
    }
    // cout << stn(q);
}