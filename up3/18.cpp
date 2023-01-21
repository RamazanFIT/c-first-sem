// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     string q;
//     cin >> q;
//     // vector <char> jojo1;
//     int max1=-1;
//     if(q.size() == 1) cout << q << " " << 1;
//     map <char, int> jojo;
//     for(int i=0;i<q.size();i++)
//     {
//         jojo[q[i]]++;
//     }
//     map <char, int> :: iterator it = jojo.end();
//     it--;
//     max1 = it->second;
//     cout << max1;
//     sort(q.begin(), q.end());
//     int cnt = 1;
//     for(int i=0;i<q.size()-1;i++)
//     {
//         if(q[i] == q[i+1]) cnt++;
//         else{
//             if(cnt == max1) {cout << q[i] <<" " << cnt+1; return 0;}
//             cnt = 1;
//         }
//     }
// }