#include <bits/stdc++.h>

using namespace std;

void foo(int * a)
{
    a++;
}



int main()
{
    // struct связка типов данных

    int a = 5;
    foo(&a);
    int * b;
    int c = 4;
    b = &c;
    b--;
    *b = 1;
    cout << *b <<" ";
    // b--;
    // cout << *b <<" ";

    cout << (&a) << " " << (b+1);
    // cout << *(&a-1);

}