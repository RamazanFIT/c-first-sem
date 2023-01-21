#include <bits/stdc++.h>
//struct

using namespace std;

struct Object
{
    int infor;
    Object * next;
};

void foo(Object * p)
{
    while(!(p == nullptr))
    {
        cout << (*p).infor <<" ";
        p = p->next;
    }
}


int main()
{
    Object A[5];
    for(int i=0;i<5;i++)
    {
        A[i].infor = i+1;
        A[i].next = A + i + 1;

    }
    A[4].next = nullptr;

    Object * p_next = A;
    Object * p = p_next;

    foo(p);

}