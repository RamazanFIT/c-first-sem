#include <bits/stdc++.h>

using namespace std;

// bool check(int * arr, int q)
// {
//     // bool flag = 1;
//     for(int i=0;i<q-1;i++)
//     {
//         if(arr[i] > arr[i+1])
//         {
//             return true;
//         }
//     }
//     return false;
// }

int main()
{
    int a = 5;
    int A[a] = {5, 3, 1, 2, 4};
    int cnt = 0;
    while(cnt <a)
    {
        if(A[cnt] > A[cnt+1])
        {
            int temp = A[cnt];
            A[cnt] = A[cnt+1];
            A[cnt+1] = temp;
            cnt = 0;
        }
        else cnt += 1;

    }
    
    for(int i=0;i<a;i++)
    {
        cout << A[i] <<" ";
    }
   
} 