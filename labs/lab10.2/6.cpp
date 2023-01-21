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
    set <int> set1;
    int x;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        int size = set1.size();
        set1.emplace(x);
        if(size != set1.size()) roma.emplace(roma.end(), x);

    }
    do
    {
        screen(roma);
    } while (next_permutation(roma.begin(), roma.end()));
    
}