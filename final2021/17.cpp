#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q, a;
    cin >> q >> a;
    int cnt=0;
    vector<string> jojo;
    while(true)
    {
        if(cnt>=q.size()) break;
        
        for(int i=0;i<q.size()-1;i++)
        {
            swap(q[i], q[i+1]);
        }
        jojo.emplace(jojo.end(), q);
        cnt++;
    }
    reverse(jojo.begin(), jojo.end());
    for(int i=0;i<q.size();i++)
    {
        if(jojo[i] == a)
        {
            cout << i;
            return 0;
        }
    }
    cout << "Understandable have a nice day";
}
// abcdfg