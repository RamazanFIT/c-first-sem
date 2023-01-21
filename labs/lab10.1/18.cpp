#include <bits/stdc++.h>

using namespace std;

int main() // fill
{
    int q;
    cin >> q;
    int size=0;
    for(int i=1;i<=q;i++)
    {
        size+=i;
    }
    vector<int> jojo(size);
    int k=0;
    
    for(int i=1;i<=q;i++)
    {
        fill(jojo.begin()+k, jojo.begin()+k+i,i );
        k+=i;
    }
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] <<" ";
    }
}