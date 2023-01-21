// #include <bits/stdc++.h>

// using namespace std;

// bool check(char a, char b)
// {
//     int k = a-'0';
//     int m = b - '0';
//     k*=10;
//     if(sqrt(k+m)*sqrt(k+m) == k+m) return true;
//     else return false;
// }






// int main()
// {
//     stack<char> jojo;
//     string q;
//     cin >> q;

//     while(true)
//     {
//         if(q.size() == 0) break;
//         // cout <<"KO";
//         // if(q.size() == 1)
//         // {
//         //     jojo.emplace(q[0]);
//         //     break;
//         // }
//         for(int i=0;i<q.size()-1;i++)
//         {
//             if(check(q[i], q[i+1])) {q.erase(i, i+2); break;} 
//             else{
//                 jojo.emplace(q[i]);
//                 q.erase(i, i+1);
//                 break;
//             }
//         }

//     }
//     if(jojo.size() == 0)
//     {
//         cout << "Stack is empty";
//         return 0;
//     }
//     while(jojo.size() != 0)
//     {
//         cout << jojo.top();
//         jojo.pop();

//     }

//     // if(check(q[0], q[1])) cout << 1;
//     // else cout << 0;

// }