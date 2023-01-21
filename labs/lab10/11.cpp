#include <bits/stdc++.h>

using namespace std;

bool check(string q)
{
    int k = ((q[1]-'0')*10+(q[0]-'0'));
    int a = pow(k, 0.5);
    if(k == a*a) return 1;
    else return 0;
}




int main()
{
    stack <char> jojo;
    string q;
    cin >> q;
    for_each(q.begin(), q.end(), [&] (char a)
    {
        jojo.emplace(a);
    });
    string a;
    string z;
    for(int t=0;t<=q.size();t++)
    {
        if(jojo.size() == 0)
        {
            if(check(a)) a.clear(); //110256 6 5 first element you should delete
            else
            {
                z+=a;
                break;
            }
        }
        if(a.size() == 2)
        {
            // reverse(a.begin(), a.end());
            if(check(a)) a.clear(); //110256 6 5 first element you should delete
            else
            {
                z+=a[0];
                a = a[1];
            }
        }
        if((a.size() <2)){a+=(jojo.top());
        jojo.pop();}
        
    }
    // cout << z;
    // if(check("50")) cout << "YES";
    // cout << z.size();
    if(z.size() != 0){ cout << z; return 0;}
    cout << "Stack is empty";
}