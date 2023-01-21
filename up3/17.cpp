// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     string q;
//     cin >> q;
//     string a = q;
//     a+='&';
//     a.erase(unique(a.begin(), a.end()), a.end());
//     int cnt=0;
//     // cout << a;
//     pair <int, char> jojo[a.size()];
//     int y = a.find('&');
//     for(int i=0;i<y;i++)
//     {
//         for(int s=0;s<q.size();s++)
//         {
//             if(a[i] == q[s]) cnt++;
//         }
//         jojo[i].first = cnt;
//         jojo[i].second = a[i];
//         cnt=0;
//     }
//     sort(jojo, jojo+y);
//     cout << jojo[y-3].second <<" " << jojo[y-1].first;
// }