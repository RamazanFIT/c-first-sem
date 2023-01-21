#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> jojo;
    int x;
    for(int i=0;i<5;i++)
    {
        cin >> x;
        jojo.emplace(x);
    }
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo.top() << endl;
        jojo.pop();
    }
}