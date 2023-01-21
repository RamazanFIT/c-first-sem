#include <bits/stdc++.h>
using namespace std;


void sot(int *w, int q)
{
    sort(w, w+q, [](int a, int b){return(a % 2 != 0);});
}
//& когда нету доступа к элементам по значению
// А это жлемент которое сравнивается а Б это весь массив с которым сравнивают



int main()
{
    int w[10] = {2, 23, 54, 23, 75, 12, 5 , 1, 4, 5};
    sot(w, 10);
    for(int i=0;i<10;i++)
    {
        cout << w[i] <<" ";
    }
}   