#include <bits/stdc++.h>
using namespace std;



int main()
{
    string q;
    cin >> q;
    while(true)
    {
        if(q.find("11") == -1) {cout << q; return 0;}


        int k = q.find("11");
        q.erase(q.find("11"), 1);
        q[k] = '0';

    
        

    }
}