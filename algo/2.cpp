#include <bits/stdc++.h>

using namespace std;

void foo(int ** q)
{
    for(int i=0;i<5;i++) q[i]++;
}

// void foo(int * q)



int main()
{
    
    // int cout = 1;
    // std:: cout << cout << cout;
    // int x = 5;

    // int * q = &x;
    // // std:: cout << q ;    
    // // vector<int> :: iterator it;
    // // string :: iterator it;
    // int a;
    // int w[5] = {1, 2, 3, 4, 5};
    // // int * x = w;
    // foo(&(*w));

    // for(int i=0;i<5;i++) 
    // {
    //     cout << w[i] <<" ";
    // }
    
    int w[3][3];
    int cnt=0;
    for(int i=0;i<3;i++)
    {
        for(int s=0;s<3;s++)
        {
            w[i][s] = cnt;
            cnt++;
        }
    }

    // foo(w[]);
    // cout << &w[0][0] <<" " << &w[1][0] << &w[2][1];w
        



    




}