#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, a;
    cin >> q >> a;
    string w;
    cin >> w;
    int z=0;
    bool flag = true;
    for(int i=0;i<w.size();i++)
    {
        if((w[i] == '-') && flag == true)
        {
            flag = false;
            continue;
        }
        if(w[i] <'1')
        {
            cout <<"NO";
            return 0;
        }
        if(w[i] >'9' + 'A'-'B')
        {
            cout <<"NO";
            return 0;
        }
    }
    for(int i=0;i<w.size();i++)
    {
        z++;
        if(w[i] == '-')
        {
            exit;
        }
    }
    if(q != z && w.size() != q + a + 1)
    {
        cout << "NO";
    }
    else{
        cout <<"YES";
    }
}