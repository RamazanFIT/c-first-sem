#include <bits/stdc++.h>
#define fr(q) for(int i=0;i<q;i++)
using namespace std;

bool comp(pair<double, string> a,pair<double, string> b)
{
    if(a.first > b.first) return true;
    else return false;
}



int main()
{
    int q;
    cin >> q;
    // vector<pair<string, double>> jojo(q);
    double cnt=0;
    // fr(q) {cin >> jojo[i].first >> jojo[i].second;cnt+=jojo[i].second;}
    // fr(q)
    // {
    //     cout << jojo[i].first <<" " << jojo[i].second/cnt << "%" << endl;
    // }
    map <string, double> jojo;
    double s;
    string d;
    fr(q)
    {
        cin >> d >> s;
        jojo[d]+=s;
        cnt+=s;

    }
    map<string, double> :: iterator it;
    vector<pair<double, string>> roma;
    for(it=jojo.begin();it!=jojo.end();it++)
    {
        // cout << it->first << " " << ((it->second)/cnt)*100 <<"%" << endl;
        // roma[it->second] = it->first;
        pair<double, string> koko;
        koko.first = it->second;
        koko.second = it->first;
        roma.emplace(roma.begin(), koko);
    }
    // sort(roma.begin(), roma.end(), comp);
    sort(roma.begin(), roma.end());
    reverse(roma.begin(), roma.end());
    // map <double, string> :: reverse_iterator it1;
    // for(it1=roma.rbegin();it1!=roma.rend();it1++)
    // {
    //     cout << it1->second << " " << ((it1->first)/cnt)*100 <<"%" << endl;
    // }
    for(int i=0;i<roma.size();i++)
    {
        cout << roma[i].second << " " << ((roma[i].first)/cnt)*100 <<"%" << endl;
    }
}