#include <bits/stdc++.h>

using namespace std;

void screen(vector <int> v1)
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
    vector <int> roma;
    unordered_set <int> set1;
    set <int> ramazan;
    int x;
    for(int i=0;i<q;i++)
    {
        // cin >> x;
        // int size = set1.size();
        // set1.emplace(x);
        // if(size != set1.size()) roma.emplace(roma.end(), x);
        cin >> x;
        set1.emplace(x);

    }
    unordered_set <int> :: iterator it;
    for(it=set1.begin();it!=set1.end();it++)
    {
        roma.emplace(roma.begin(), *it);
    }
    // screen(roma);
    roma.shrink_to_fit();
    
    do
    {
        screen(roma);
    } while (next_permutation(roma.begin(), roma.end()));
    
}