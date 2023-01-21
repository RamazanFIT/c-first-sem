#include <bits/stdc++.h>

using namespace std;

int bin(string q)
{
    int k = q.size()-1;
    int cnt =0;
    for(int i = q.size()-1;i>=0;i--)
    {
        cnt+=((pow(2, k-i))*(q[i]-'0'));

    }
    return cnt;
}




int main()
{
    string q;
    cin >> q;
    cout << bin(q);

}