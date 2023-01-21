// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     stack <char> jojo;
//     string q;
//     cin >> q;
//     for(int i=0;i<q.size();i++)
//     {
//         jojo.emplace(q[i]);
    
//     }
//     string a;
//     stack <char> roma;
//     while(jojo.size()!=0)
//     {
//         a+=jojo.top();
//         if(a.size()== 2)
//         {
//             if(a =="11")
//             a.clear();
//             else{
//                 roma.push(a[0]);
//                 a = a[1];
//             }
//         }
//     }
   
   
//     while(roma.size()!=0)
//     {
//         cout << roma.top();
//         roma.pop();
//     }
// }