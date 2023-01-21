#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    map<char, char> jojo;
    jojo['A'] = 'T';
    jojo['C'] = 'G';
    jojo['T'] = 'A';
    jojo['G'] ='C' ;
    for(int i=0;i<q.size();i++)
    {
        cout << jojo[q[i]];
    }
     
}