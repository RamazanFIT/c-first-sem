#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4,5};

    int q = 5;
    
    int B[q];

    for(int i=0;i<q/2;i++)
    {
        int tmp; 

        tmp = A[i]; 

        A[i] = A[q-1-i];
        
        A[q-1-i] = tmp;

    }  

    for(int i=0;i<q;i++)
    {
        cout << *(A+i) <<" ";
    }
    

}