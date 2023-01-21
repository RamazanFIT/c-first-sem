#include <bits/stdc++.h>

using namespace std;

bool check(string q)
{
    int k = ((q[0]-'0')*10+(q[1]-'0'));
    int a = pow(k, 0.5);
    if(k == a*a) return 1;
    else return 0;
}


string rec(string q)
{
    static bool t = true;
    bool f = true;
    string a;
    int k = q.size();
    if(t)
    {
        for(int i=0;i<k-1;i++)
        {
            a = q.substr(i, 2);
            if(check(a)) {q.erase(i, 2); f = false;a.clear();}

        }
        if(f) t = false;
    }
    else{
        return(q);
    }
}



int main()
{
    string q;
    cin >> q;
    cout << rec(q);
}