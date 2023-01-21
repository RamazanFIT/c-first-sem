#include <bits/stdc++.h>

using namespace std;

bool check(char a, char b)
{
    int k = a-'0';
    int m = b - '0';
    k*=10;
    if(sqrt(k+m)*sqrt(k+m) == k+m) return true;
    else return false;
}





int main()
{
    string q;
    cin >> q;
    stack<char> jojo;
    jojo.emplace(q[0]);
    q.erase(0, 1);
    int cnt=0;
    while(true)
    {
        if(q.size() == 0) break;

        if(check(jojo.top(), q[0]))
        {
            jojo.pop();
            q.erase(0, 1);
        }
        else{
            jojo.push(q[0]);
            q.erase(0, 1);
        }
        // cnt++;
    }
    if(jojo.size() == 0) 
    {
        cout << " Stack is empty ";
        return 0;
    }
    while(jojo.size()!=0)
    {
        cout << jojo.top();
        jojo.pop();
    }
}