#include <bits/stdc++.h>



int main()
{
    using namespace std;
    int a = 5;
    int b = 2;
    int c = 1;
    int * q;
    q = &a;

    // *(q+int(q)) = a;
    // // cout << int(&a) <<" " << (int)q << int(q+int(q)) << endl;

    // cout << a <<" " << *q << " " << *(q+int(q));
    *(q-1) = 1;

    cout << &a <<" " << &b <<" " << &c; 


}