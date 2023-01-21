#include <bits/stdc++.h>
#define fr(a) for(int i=0;i<a;i++)
using namespace std;

int main()
{
    int q;
    cin >> q;
    vector <int> jojo(q);
    fr(q) cin >> jojo[i];
    vector <int> roma;
    roma = jojo;// copy vector
    reverse(roma.begin(), roma.end());
    fr(q)
    {
        if(roma[i] == jojo[i]) cout << "OK" << endl;
        if(roma[i] != jojo[i])
        {
            cout << "Instead of " << jojo[i] << " here was " << roma[i] << endl;
        }
    }
}