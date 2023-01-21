#include <bits/stdc++.h>

using namespace std;

int main()
{
    // AAA@BBB.CCC
    string q;
    cin >> q;
    if(q.find('.') == -1 || q.find('@') == -1)
    {
        cout << "No";
        return 0;
    }
    for(int i=0;i<q.size();i++)
    {
        if(q[i]>='0' && q[i]<='1')
        {
            cout << "No";
            return 0;

        }
        if(q[i] == '.' || q[i] == '@') continue;

        if(q[i]>='A' && q[i]<='Z')
        {
            cout << "No";
            return 0;

        }
    }

    if(q[q.size()-1] == '.' || q[q.size()-1] == '@') 
    {
        cout <<"No";
        return 0;
    }
    if(q[0] == '.' || q[0] == '@') 
    {
        cout <<"No";
        return 0;
    }
    if(q.find('.') < q.find('@'))
    {
        cout <<"No";
        return 0;
    }

    string a = q;
    string f = q;
    a.erase(a.find('@'), 1);
    if(a.find('@') != -1)
    {
        cout <<"No";
        return 0;
    }
    f.erase(f.find('.'), 1);
    if(f.find('.') != -1)
    {
        cout <<"No";
        return 0;
    }

    cout << "YES";
    


}