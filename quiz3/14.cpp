#include <bits/stdc++.h>

using namespace std;

int calc(string q, string a, string z)
{
    int w =0, e =0;

    if(a.size() == 1)
    {
        w+=(a[0]-'0');
    }
    if(a.size() == 2)
    {
       w+=((a[0]-'0')*10 + a[1]- '0' );
    }
    if(a.size() == 3)
    {
        w+=((a[0]-'0')*100 + (a[1]-'0')*10 + (a[2]-'0'));
    }
    if(a.size() == 4)
    {
        w+=((a[0]-'0')*1000 + (a[1]-'0')*100 + (a[2]-'0')*10 + (a[3]-'0'));
    }

    
    if(z.size() == 1)
    {
        e+=(z[0]-'0');
    }
    if(z.size() == 2)
    {
       e+=((z[0]-'0')*10 + z[1] -'0');
    }
    if(z.size() == 3)
    {
        e+=((z[0]-'0')*100 + (z[1]-'0')*10 + (z[2]-'0'));
    }
    if(z.size() == 4)
    {
        e+=((z[0]-'0')*1000 + (z[1]-'0')*100 + (z[2]-'0')*10 + (z[3]-'0'));
    }





    if(q == "+")
    {
        return((w) +( e ));
    }
    if(q == "-")
    {
        return((w) - (e ));
    }
    if(q == "*")
    {
        return((w) * (e ));
    }
    if(q == "/")
    {
        return((w) / (e ));
    }
}




int main()
{
    int q;
    cin >> q;
    string w1[q], w2[q], w3[q], w4[q], w5[q];
    for(int i=0;i<q;i++)
    {
        cin >> w1[i];
        cin >> w2[i];
        cin >> w3[i];
        cin >> w4[i];
        cin >> w5[i];
    }
    for(int i=0;i<q;i++)
    {
        cout << w2[i] <<" " <<w1[i] << " " <<w4[i] <<" = " << calc(w1[i], w3[i], w5[i]) << endl;
    }
}