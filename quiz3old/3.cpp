#include <bits/stdc++.h>

using namespace std;

bool jojo(string q, string w)
{
    if(q == w) return 1;
    else return 0;
}






int main()
{
    string q, w;
    cin >> q >> w;
    if(jojo(q, w)) cout << "yes";
    else cout << "no";

}