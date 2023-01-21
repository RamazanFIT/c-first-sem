#include <bits/stdc++.h>

using namespace std;

void Tobinary(int q)
{
    string a;
    while(q!=0)
    {
        a+=(char(q%2)+'0');
        q/=2;

    }
    reverse(a.begin(), a.end());
    cout << a << endl;
}



int main()
{
    int q;
    cin >> q;
    vector<int> jojo(q);
    for(int i=0;i<q;i++) cin >> jojo[i];
    for_each(jojo.begin(), jojo.end(), Tobinary);

}