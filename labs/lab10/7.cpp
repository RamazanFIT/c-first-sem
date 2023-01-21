#include <bits/stdc++.h>

using namespace std;

int main()
{
    // vector in vector
    vector < vector<int> > jojo;
    vector <int> v1 = {1, 2, 3, 4};
    vector <int> v2 = {2, 2, 2, 2};
    vector <int> v3 = {3, 3, 3};
    vector <int> v4 = {3, 3, 3, 3};
    // jojo.push_back(v1);
    jojo.push_back(v2);
    jojo.push_back(v3);
    jojo.push_back(v4);
    jojo.insert(jojo.end(), v1); //it work

    // for(int i=0;i<jojo.size();i++)
    // {
    //     for(int s=0;s<jojo[i].size();s++)
    //     {
    //         cout << jojo[i][s] <<" ";
    //     }
    //     cout << endl;
    // }

    for(int i=0;i<jojo.size();i++)
    {
        for(auto it=jojo[i].begin();it!=jojo[i].end();it++)
        {
            cout << *it <<" ";
        }
        cout << endl;
    }

}