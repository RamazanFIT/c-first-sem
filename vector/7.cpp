#include <bits/stdc++.h>

using namespace std;

bool isPrime(int q)
{
    for(int i=2;i<sqrt(q);i++)
    {
        if(q%i == 0) return false;
    }
    return true;
}





int main()
{
    int q;
    cin >> q;
    vector <int> jojo;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        jojo.insert(jojo.end(), x);

    }
    int u;
    cin >> u;
    int cnt=0;
    for(int i=0;i<jojo.size();i++)
    {
        if(jojo[i]>u && isPrime(jojo[i]))
        {
            cnt++;
        }
    }
    cout << cnt;
}