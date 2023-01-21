#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    
    for(int i=0;i<q.size();i++)
    {
        
        for(int s=0;s<q.size();s++)
        {
            if(i == s) continue;
            if(q[i] == q[s])
            {
                cout << q[i];
                return 0;
            }
        }
    }
}