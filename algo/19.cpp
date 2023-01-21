#include <bits/stdc++.h>

using namespace std;

void print(int * pA_2D, int x, int y)
{
    for(int i=0;i<x;i++)
    {
        for(int s=0;s<y;s++)
        {
            // cout << pA[i*y + s] <<" ";
            cout << *(pA_2D + (i * y) + s) << " ";
        }
    }
}






int main()
{
    int x, y;
    cin >> x >> y;
    int A[x][y];
    int cnt = 0;

    for(int i=0;i<x;i++)
    {
        for(int s=0;s<y;s++){
            A[i][s] = cnt;
            cnt++; } 
    }
    int * pA;
    pA = (int *)(A);
    // pA = reinterpret_cast<int *>(A);

    print(pA, x, y);

}