#include <bits/stdc++.h>

using namespace std;

bool comp(int a)
{
    if(a == 0 || a == 1) return false;
    bool flag = true;
    for(int i=2;i<a;i++)
    {
        if(a%i == 0) flag = false;
    }
    if(flag) return true;
    else return false;
}





int main() //count_if
{
    int q;
    cin >> q;
    vector <int> jojo;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        int y = 1;
        if(x <0) y = -1;
        jojo.emplace(jojo.end(), x*y);
        y = 1;
    }
    // for(int i=0;i<q;i++) cout << jojo[i] << " ";
    int k = count_if(jojo.begin(), jojo.end(), comp);
    cout << k;
}