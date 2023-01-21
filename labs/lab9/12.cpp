#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    pair <int, int> jojo[q];
    int x, y;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        cin >> y;
        jojo[i].first = x+y;
        jojo[i].second = i+1;
    }
    sort(jojo, jojo+q);
    for(int i=0;i<q;i++)
    {
        cout << jojo[i].second << " ";
    }
}