// #include <bits/stdc++.h>

// using namespace std;

// bool comp(pair<string, string> a, pair<string, string> b)  
// {
//     if(a.second == b.first) return true;
//     else if(a.first == b.second) return true;
//     else return false;
// }




// int main()
// {
//     int q;
//     cin >> q;
//     string x, y;
//     vector<pair<string, string>> jojo;
//     for(int i=0;i<q;i++)
//     {
//         cin >> x >> y;
//         pair<string, string> akk1(x, y);
//         // pair<string, string> akk2(y, x);
//         jojo.emplace(jojo.end(), akk1);
//         // jojo.emplace(jojo.end(), akk2);
        
//     }
//     sort(jojo.begin(), jojo.end(), comp);
//     for(int i=0;i<jojo.size();i++)
//     {
//         cout << jojo[i].first <<" " << jojo[i].second << endl;
//     }
// }