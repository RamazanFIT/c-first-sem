#include <bits/stdc++.h>


using namespace std;

int main()
{
    int q;
    cin >> q;
    string a[q];
    for(int i=0;i<q;i++)
    {
        cin >> a[i];
    }
    int c=0;
    int d=0;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(i == s) continue;
            if(a[s] == "0") continue;
            if(a[i] == a[s])
            {
                c++;
                a[s] = "0";
            }
            
        }
        if(c>=2) {d++;}

        c=0;
    }
    cout << d;
}