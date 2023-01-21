#include <bits/stdc++.h>



int NOD(int q, int a)
{
    if(q == a) return q;
    int k;
    if(q > a) k = q - a;
    int z = a;
    if(q < a)
    {
        k = a - q;
        z = q;
    }
    return NOD(k, z);
}

int main()
{
    int q, a;
    std:: cin >> q, std:: cin >> a, std:: cout << NOD(q, a);

    
}