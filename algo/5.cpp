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
    while(p->next != nullptr)
    {
        cout << (*p).infor <<" ";
        

        p = p->next;
    }
}


int main()
{
    // Object A[5];
    Object * p_next = new Object;
    Object * p = p_next;

    for(int i=0;i<5;i++)
    {
        // A[i].infor = i+1;
        // A[i].next = A + i + 1;
        p->infor = i+1;
        p->next = new Object;
        p = p->next;

    }
    
    p->next = nullptr;
    // p->infor = 12344;
   

    foo(p_next);

}