#include <bits/stdc++.h>
#define ll long long
using namespace std;
// xx
ll gen()
{
    static int a=-1;
    a++;
    int k=1;
    for(int i=0;i<a;i++)
    {
        k*=a;
    }
    // a++;
    return k;
}







int main()
{
    int q;
    cin >> q;
    
    vector<int> jojo(q+1);
    generate(jojo.begin(), jojo.end(), gen);
    for(auto it : jojo)
    {
        cout << it <<" ";
    }

}