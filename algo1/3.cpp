#include <bits/stdc++.h>

using namespace std;
int Naz[10];

int main()
{
    string nazym;
    cin >> nazym;
    for(int i=0;i<nazym.size();i++)
    {
        Naz[nazym[i]-'0']++;

    }
    // 0 0 1 1 0 0 1 1 1
    // 0 00 0 0 0 0 1 1 1 1 1 1

    sort(Naz, Naz+10);

    for(int i=0;i<9;i++)
    {
        if(Naz[i] == 0) continue;

        if(Naz[i] != Naz[i+1])
        {
            cout <<"NO";
            return 0;
        }

    }

    cout <<"YES";
}