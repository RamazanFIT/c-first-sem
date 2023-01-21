#include <bits/stdc++.h>

using namespace std;







int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector <int> jojo;
    int k = min(a, b);
    for(int i=1;i<=k;i++)
    {
        if(a%i == 0 && b%i == 0) jojo.emplace(jojo.end(), i);
    }
    int y=0;
    if(c == 4) y = 1;
    // cout << jojo[c-1-y];
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] <<" ";
    }
    
    
}