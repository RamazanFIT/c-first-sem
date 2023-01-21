#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cout << setprecision(20) << double(2)/float(3);
    // n−i+1
    string q;
    cin >> q;
    int n = 'A'-'Z'; // a - z -(a-q) = /////////////////(q - z + 1)
    string a;
    for(int i=0;i<q.size();i++)
    {
        // a + (('z'-'a') - q - 'a'+1) == z + 1 - q - a;
        int k = 'z'+1-q[i]-'a';
        cout << char(k) <<" ";
    }
    cout << a;
}