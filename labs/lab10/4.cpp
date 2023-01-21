#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector <int> jojo;
    for(int i=0;i<=q;i++)
    {
        jojo.insert(jojo.end(), i);
    }
    
    generate_n(jojo.begin(), jojo.end());
}