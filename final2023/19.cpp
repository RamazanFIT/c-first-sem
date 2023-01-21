#include <bits/stdc++.h>

using namespace std;

bool comp(vector<int> a, vector<int> b)
{
    int mas1=0, mas2=0;
    for(int i=0;i<a.size();i++)
    {
        mas1+=a[i];
    }

    for(int i=0;i<b.size();i++)
    {
        mas2+=b[i];
    }

    // if(mas1>mas2) return true;
    // else if(mas1 == mas2)
    // if(a.size()<b.size()) return true;
    // else return false;
    // if(mas1 > mas2) return false;
    // else if(mas1 == mas2) if(a.size()<b.size()) return true;
    // else return false;
    if(mas1 < mas2) return true;

    if(mas1 == mas2) if(a.size()<b.size()) return true;
    else return false;
    // else return false;
    return false;


}





int main()
{
    int q;
    cin >> q;
    vector<vector<int>> jojo;

    for(int i=0;i<q;i++)
    {
        int a;
        cin >> a;
        vector<int> akk(a);
        for(int s=0;s<a;s++)
        {
            cin >> akk[s];
        }
        jojo.emplace(jojo.end(), akk);


    }

    sort(jojo.begin(), jojo.end(), comp);

    for(int i=0;i<q;i++)
    {
        for(int s=0;s<jojo[i].size();s++)
        {
            cout << jojo[i][s] <<" ";
        }
        cout << endl;
    }

}