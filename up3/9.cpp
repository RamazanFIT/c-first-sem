#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    // vector <char> jojo;
    
    string a;
    cin >> a;
    char t;
    cin >> t;
    bool flag = false;
    for(int i=0;i<q.size();i++)
    {
        for(int s=0;s<a.size();s++)
        {
            if(q[i] == a[s]) flag = true;
        }
        if(flag) {cout << t; flag = false;continue;}
        flag = false;
        cout << q[i];
    }
}