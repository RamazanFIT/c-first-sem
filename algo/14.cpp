#include <bits/stdc++.h>

using namespace std;

bool check(int * arr, int q)
{
    // bool flag = 1;
    for(int i=0;i<q-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a = 5;
    int A[a] = {5, 3, 1, 2, 4};
    
    while(check(A, a))
    {
        for(int i=0;i<a-1;i++)
        {
            if(A[i] > A[i+1]) 
            {
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp; 
            }
        }

        for(int i=0;i<a;i++)
        {
            cout << A[i] <<" " ;
        }
        cout << endl;

    }
    
} 