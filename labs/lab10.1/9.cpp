#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> jojo(q);
    for(int i=0;i<q;i++)
    {
        cin >> jojo[i];
    }
    // 0 0 0 0 0 0 0
    for(int i=0;i<q;i++)
    {
        if(jojo[i] == jojo[q-i-1]) 
        {
            cout << "OK" << endl;
            continue;
        }
        if((jojo[i]!=jojo[q-i-1]) && i<=q/2)
        {
            cout << "Instead of " << jojo[i] <<" here was " << jojo[q-i-1] << endl;
        } 
        if(i >q/2) 
        {
            cout << "Instead of " << jojo[i] <<" here was " << jojo[q-i-1] << endl;
        }
    }
}