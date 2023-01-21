#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[3][3];
    int cnt = 9;
    for(int i=0;i<3;i++)
    {
        for(int s=0;s<3;s++)
        {
            A[i][s] = cnt;
            cnt--;
        }
    }

    // int * pA = reinterpret_cast<int *>(A);

    int * pA = (int *)(A);
    for(int i=0;i<9;i++)
    {
        cout << *(pA+i) <<" ";
    }

    // 0 1 2  ИМЕННО ВОТ ТАК ВОТ ХРАНИТСЯ В ПАМЯТИ 2D ARRAY
    // 3 4 5
    // 6 7 8

    
}