#include <bits/stdc++.h>

using namespace std;

void foo(int * a)
{
    a++;
}






int main()
{
    int a = 5;
    foo(&a);
    cout << *(&a-1) <<" " << a;
    // при изменении местоположения туда копируется со значением
    
}