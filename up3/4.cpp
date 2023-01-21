#include <bits/stdc++.h>

using namespace std;

string dex(int q)
{
    string a;
    int k;
    while(q != 0)
    {
        k = q%16;
        if(k<=9) a+=((char)('0' + k));
        else a +=((char)('A'+k-10));
        q/=16;
    }
    reverse(a.begin(), a.end());
    return a;

}





int main()
{
    int q;
    cin >> q;
    cout << dex(q);
}