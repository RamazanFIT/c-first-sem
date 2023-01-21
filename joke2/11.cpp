#include <bits/stdc++.h>



int main()
{
    int q;
    std:: cin >> q;
    int k=1;
    int z=0;
    int w[q][q];
    if(q%2 !=0) w[q/2][q/2] = q*q;
    while(k<=q*q)
    {


        for(int i=z;i<q-z;i++)
        {
            w[z][i] = k;
            k++;
        }
        for(int i=z+1;i<q-z;i++)
        {
            w[i][q-1-z] = k;
            k++;
        }
        for(int i=q-2-z;i>=z;i--)
        {
            w[q-1-z][i] = k;
            k++;
        }
        for(int i=q-2-z;i>=1+z;i--)
        {
            w[i][z] = k;
            k++;
        }

        z++;
    }
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            std:: cout << w[i][s] <<" ";

        }
        std:: cout << std:: endl;
    }

}