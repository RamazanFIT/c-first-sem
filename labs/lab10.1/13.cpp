#include <bits/stdc++.h>

using namespace std;

int main()
{
    // next_permutation(begin, end); //след перестановка отличная от этого предыдущего
    int q;
    cin >> q;
    vector <int> jojo{1, 2, 3};
    int cnt=0;
    while(cnt!=10)
    {
        for(int i=0;i<jojo.size();i++)
        {
            cout << jojo[i] <<" ";
        
        }
        next_permutation(jojo.begin(), jojo.end());
        cout << endl;
        cnt++;
    }
}