#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    set <int> jojo;
    int x;
    int size;
    vector<int> roma;

    for(int i=0;i<q;i++)
    {
        cin >> x;
        size = jojo.size();
        jojo.emplace(x);
        if(size != jojo.size()) roma.emplace(roma.end(), x);

    }
    // vector<int> :: iterator it;
    // it = unique(jojo.begin(), jojo.end());
    // jojo.erase(it, jojo.end());
    
    // for(int i=0;i<jojo.size();i++)
    // {
    //     cout << jojo[i] <<" ";
    // }
    
    // 0 0 0 00 0 00 0 
    


    do
    {
        for(int i=0;i<roma.size();i++)
        {
            cout << roma[i] << " ";
        }
        cout << endl;
    } while (next_permutation(roma.begin(), roma.end()));
    
   
    
}