#include <bits/stdc++.h>
using namespace std;


string  zvezda(string q)
{
    string k ="";
    for(int i=0;i<q.size();i++)
    {
        k+=q[i];
        if(i == q.size()-1) continue;
        k+='*';
    }
    return k;
}



int main()
{
    string q;
    cin >> q;
    cout << zvezda(q);

}