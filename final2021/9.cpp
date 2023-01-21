#include <bits/stdc++.h>

using namespace std;

// struct roma {
    
// };// name ; 

bool comp(pair<pair<string, string>, float> a, pair<pair<string, string>, float> b)
{
    if(a.second < b.second) return true;
    else return false;
}


int main()
{
    //GPA
    // cout << setprecision(4) << (float)((4*3.75+2*1.5+3*3+4*4)/(4+2+3+4));
    int q;
    cin >> q;
    vector<pair<string, float>> roma {pair<string, float>("A+", 4), pair<string, float>("A", 3.75), pair<string, float>("B+", 3.5), pair<string, float>("B", 3), pair<string, float>("C+", 2.5), pair<string, float>("C", 2), pair<string, float>("D+", 1.5), pair<string, float>("D", 1), pair<string, float>("F", 0) };
    vector<pair<pair<string, string>, float>> jojo;
    for(int i=0;i<q;i++)
    {
        string a, z;
        cin >> a >> z;
        pair<string, string> kjkj(a, z);
        int numb;
        cin >> numb;
        string j;
        float coll=0;
        float sum=0;
        for(int i=0;i<numb;i++)
        {
            int k;
            cin >> j;
            cin >> k;
            for(int s=0;s<roma.size();s++)
            {
                if(j == roma[s].first)
                {
                    coll+=(roma[s].second * k);
                    break;
                }
            }
            sum+=k;

        }
        float o = coll/sum;
        coll =0;
        sum=0;
        pair<pair<string, string>, float> uiui(kjkj, o);
        jojo.emplace(jojo.end(), uiui);

    }

    sort(jojo.begin(), jojo.end(), comp);
    for(auto it : jojo)
    {
        cout  << it.first.first << " " << it.first.second <<" ";
        printf("%.3f", it.second) ; cout << endl;
    }
}