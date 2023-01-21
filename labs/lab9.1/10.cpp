#include <bits/stdc++.h>

using namespace std;

int main()
{
    string jojo;
    cin >> jojo;
    int b;
    
    while(jojo.find("11") != -1)
    {
        b = jojo.find("11");
        jojo.erase(b, 2);

    }
    cout << jojo;
}