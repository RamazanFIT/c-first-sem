#include <bits/stdc++.h>

using namespace std;

string dec(int q)
{
    string a;
    while(q!=0)
    {
        a+=((char)(q%2+'0'));
        q/=2;

    }
    reverse(a.begin(), a.end());
    return a;
}







int main()
{
    int q;
    cin >> q;
    cout << dec(q);

}