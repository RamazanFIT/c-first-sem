#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;



ull altyn()
{
    static long long j = -1;
    j++;
    ull k=1;
    for(int i=1;i<=j;i++)
    {
        k*=j;
    }
    return k;

}

// void ROMA(int a)
// {
//     cout << a <<" ";    
// }

void showvector(vector<ull> jojo)
{
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] << ' ';
    }
}


int main()
{
    int q;
    
    cin >> q;
    vector <ull> Doka(q+1);
    generate(Doka.begin(), Doka.end(), altyn);
    // for(auto i : Doka)
    // {
    //     cout << i << " ";
    // }
    // for(int i=0;i<=q;i++)
    // {
    //     cout << Doka[i] <<" ";
    // }
    // for_each(Doka.begin(), Doka.end(), ROMA)
    // showvector(Doka);
}