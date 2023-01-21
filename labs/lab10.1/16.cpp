#include <bits/stdc++.h>

#define T true
#define F false
using namespace std;

bool comp(int a, int b)
{
    swap(a, b);
}



int main()
{
    int q, a;
    cin >> q >> a;
    vector<int> jojo(q);
    for(int i=0;i<q;i++)
    {
        cin >> jojo[i];
    }
    rotate(jojo.begin(), jojo.begin()+a, jojo.end());
    sort(jojo.begin(), jojo.end(), comp);
    for(int i=0;i<q;i++)
    {
        cout << jojo[i] <<" ";
    } 
}