#include <bits/stdc++.h>

using namespace std;
#define F first
#define S second
int main()
{
    int q;
    cin >> q;
    pair<int, int> jojo[q]; //massive pairov pair eto prosto para bez mnozhestva;
    for(int i=0;i<q;i++)
    {
        cin >> jojo[i].F;
        cin >> jojo[i].S;
    }
    sort(jojo, jojo+q);
    for(int i=0;i<q;i++)
    {
        cout << jojo[i].F <<" " <<jojo[i].S << endl;
    }
    
}