#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    int z=0, n =0, b=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] == ')') b++;

        if(q[i] == '(') n++;

    }
    if(b!= n)
    {
        cout << "NO";
        return 0;
    }
    
    for(int i=0;i<(q.size())/2;i++)
    {
        if(q[i] == q[q.size()-1-z])
        {
            cout << "NO";
            return 0;
        }
        z++;
    }
    
    
    cout <<"YES";
}