#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    string a;
    int max1=0;
    string b;
    b = q;
    reverse(b.begin(), b.end());
    if(b != q)
    {
        cout << q.size();
        return 0;
    }
    for(int i=0;i<q.size();i++)
    {
        for(int s=i+1;s<q.size();s++)
        {
            a = q.substr(i, s);
            string z = a;
            reverse(z.begin(), z.end());
            int m = z.size();
            if(z != a) max1 = max(max1, m);
        }
    }
    cout << max1;


}