#include <bits/stdc++.h>

using namespace std;

int isTrue(int q, int a)
{
    return(__gcd(q, a));
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
        jojo.emplace(jojo.end(), x);
    }
    int max1=-1;
    for(int i=0;i<jojo.size();i++)
    {
        for(int s=i+1;s<jojo.size();s++)
        {
            max1 = max(max1, isTrue(jojo[i], jojo[s] ));
        }
    }
    cout << max1;
}