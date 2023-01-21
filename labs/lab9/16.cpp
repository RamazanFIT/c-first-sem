#include <bits/stdc++.h>
using namespace std;
// самый большое слово через сортировку

int main()
{
    
    vector <string> jojo;
    string a;
    getline(cin, a);
    a+=" &";
    string x;

    for(int i=0;i<a.size();i++)
    {
        if(a[i] !=' ')
        {
            x+=(a[i]);
        }
        else{
            jojo.insert(jojo.end(), x);
            x.clear();
            continue;
        }
    }

    sort(jojo.begin(), jojo.end(), [](string a, string b){return(a.size()>b.size());});
    
    // for(int i=0;i<jojo.size();i++)
    // {
    //     cout << jojo[i] <<" ";
    // }
    cout << jojo[0];
}