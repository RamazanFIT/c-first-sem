#include <bits/stdc++.h>

using namespace std;

bool palind(vector <int> jojo)
{
    for(int i=0;i<jojo.size()/2;i++)
    {
        if(jojo[i] != jojo[jojo.size()-1-i])
        return false;
    }
    return true;
}



int main()
{
    int q;
    cin >> q;
    vector <int> jojo(q);
    // char x;
    for(int i=0;i<q;i++)
    {
        cin >> jojo[i];
    }
    sort(jojo.begin(), jojo.end());
    //next_permutation
    // vector<string> roma;
    

    do
    {
        if(palind(jojo)) {for(int i=0;i<jojo.size();i++) {cout << jojo[i] <<" ";};return 0;}
    } while (next_permutation(jojo.begin(), jojo.end()));

    cout << "Impossible";
}