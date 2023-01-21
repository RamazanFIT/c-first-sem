#include <bits/stdc++.h>

using namespace std;

int main()
{
        set <int> roma = {1, 2, 34, 4, 56564, 3424};
        // for(auto it = roma.begin();it!=roma.end();it++)
        // {
        //     cout << *it << " ";
        // }
        set <int> :: iterator it;
        it = roma.begin();
        while(true)
        {
            
            cout << *it <<" ";
            it++;
            if(it==roma.end()) break;
        }


}