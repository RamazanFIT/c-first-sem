#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    // vector <string> jojo;
    string a;

    pair <double, string> price[q];
    double x, y;
    double k;
    double max1=-1;
    for(int i=0;i<q;i++)
    {
        cin >> a >> x >> y;
        // jojo.emplace(jojo.end(), a);
        k = y/x;
        price[i].second = a;
        price[i].first = k;
        max1 = max(max1, k);

    }
    sort(price, price+q);
    for(int i=0;i<q;i++)
    {
        if(max1 == price[i].first)
        {
            cout << price[i].second;
            return 0;
        }
    }

}