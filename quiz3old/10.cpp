#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    string h = q;
    int c=0;
    for(int i=0;i<q.size()-1;i++)
    {
        if(q[i] == q[i+1]) c++;
    }
    if(c+1 == q.size())
    {
        cout << 0;
        return 0;
    }
    reverse(h.begin(), h.end());
    if(q != h)
    {
        cout << q.size();
        return 0;
    }
    else{
        cout << q.size()-1;
    }

}