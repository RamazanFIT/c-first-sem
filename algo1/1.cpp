#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int * x;
    // cout << x << endl;

    
    // x = new int;

    // // cout << int(x) << endl;

    // x = new int[10000];

    // // cout << int(x) << endl;

    // *(x+1) = 5;

    // *(x+2) = 6;

    // *(x+3) = 7;
    // *(x+7000) = 8;

    // cout << *(x+1) <<" " << *(x+2) <<" " << *(x+3) <<" " << *(x+7000);

    int N = 3, M = 4;

    int ** A;
    A = new int * [N];

    for(int i=0;i<N;i++)
    {
        A[i] = new int [M];
    }

    for(int i=0;i<N;i++)
    {
        for(int s=0;s<M;s++)
        {
            A[i][s] = s+i+1;
        }
    }

    for(int i=0;i<N;i++)
    {
        for(int s=0;s<M;s++)
        {
            cout << A[i][s] << " ";
        }

        cout << endl;
    }
    
    for(int i=0;i<N;i++)
    {
        for(int s=0;s<M;s++)
        {
            delete &A[i][s];
        }
    }

    delete A;









}