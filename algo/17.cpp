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
    int a = 100000;
    // int A[a] = {5, 3, 1, 2, 4};
    int A[a];
    for(int i=0;i<a;i++) A[i] = a-i;
    int cnt = 0;
    // sort(A, A + a );
    bool flag = true;
    while(flag)
    {
        cnt = 0;
        flag = false;
        while(cnt<a)
        {
            if(A[cnt] > A[cnt+1])
            {
                int temp = A[cnt];
                A[cnt] = A[cnt+1];
                A[cnt+1] = temp;
                flag = true;

            }
            cnt += 1;

        }
    }
    
    

    for(int i=0;i<a;i++)
    {
        cout << A[i] <<" ";
    }
    
} 