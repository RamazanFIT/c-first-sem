#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    string w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    string t = "0123456789";
    string a ="ABCEHKMOPTXY";
    for(int i=0;i<q;i++)
    {
            if(w[i].size() != 6)
        {
            cout <<"No" << endl;
            continue;
        }
        if((a.find(w[i][0]) == -1) || (a.find(w[i][4]) == -1) || (a.find(w[i][5]) == -1))
        {
            cout <<"No" << endl;
            continue;
        }
        if((t.find(w[i][1]) == -1) || (t.find(w[i][2]) == -1) || (t.find(w[i][3]) == -1))
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
       
    }

}