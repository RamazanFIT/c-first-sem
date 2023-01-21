#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int a=-1;

ull comp()
{
    a++;
    ull res=1;
    for(int i=0;i<a;i++)
    {
        res*=a;
    }
    return res;
}

void screen(vector <ull> v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] <<" ";
    }
    cout << endl;
}



int main()
{
    int q;
    cin >> q;
    vector<ull> jojo(q+1);
    generate(jojo.begin(), jojo.end(), comp); 
    screen(jojo);
}