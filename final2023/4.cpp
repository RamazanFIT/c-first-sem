// #include <bits/stdc++.h>

// using namespace std;

// int q, a;
// char jojo[1000][1000];

// int lab(int x, int y)
// {
//     // cout << "KO";
//     if(x<0) return 0;
//     if(y<0) return 0;
//     if((jojo[x][y] == '#') || x>=q || y >=a) return 0;
//     if(x == q-1 && y == a-1) return 1;

//     return(lab(x+1, y)+lab(x-1, y)+lab(x, y+1)+lab(x, y-1));

// }




// int main()
// {
    
//     cin >> q >> a;

//     for(int i=0;i<q;i++)
//     {
//         for(int s=0;s<a;s++)
//         {
//             cin >> jojo[i][s];
//         }
//     }
//     // cout << lab(0, 0);
//     int k = lab(0, 0);
//     cout << k;
//     // if(lab(0, 0) >= 1) cout << "YES";
//     // else cout << "NO";

//     cout << "NO";
    
// }