#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q1, q2, w1, w2;
    int x, y;
    cin >> q1 >> q2 >> w1 >> w2 >> x >> y;
    if(x >= q1 && x <= w1 && y >=w2 && y<=q2)
    {
        cout << "YES";
    }
    else{
        cout <<"NO";
    }
}
