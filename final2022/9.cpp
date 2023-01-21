// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     string q;
//     cin >> q;
//     string a = q;
//     sort(a.begin(), a.end());
//     string :: iterator it;
    
//     string z;
//     for(int i=0;i<a.size()-1;i++)
//     {
//         if(a[i] == a[i+1]) z+=a[i];
//     }
//     it = unique(z.begin(), z.end());
//     z.erase(it, z.end());
//     // it = unique(a.begin(), a.end());
//     // a.erase(it, a.end());
    
//     for(int i=0;i<z.size();i++)
//     {
//         if(q.find(z[i]) != -1)
//         {
//             q.erase(q.find(z[i]));
//         }
//     }
//     // cout << a;
//     cout << z << endl;
//     cout << q;
//     // cout << z;

// }