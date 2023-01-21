#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <int, double> jojo;
    for(int i=0;i<50;i++)
    {
        jojo[i] = 0;
    }
    int q;
    cin >> q;

    double cnt = 1;
    for(int i=50;i<100;i+=5)
    {
        jojo[i] = cnt;
        jojo[i+1] = cnt;
        jojo[i+2] = cnt;
        jojo[i+3] = cnt;
        jojo[i+4] = cnt;
        cnt+=(double)(1)/(double)(3);
    }


    // for(int i=0;i<100;i++)
    // {
    //     cout << jojo[i] <<" ";
    // }
    jojo[100] = 4;
    int krd=0;
    int at1, at2, fin;
    double kr;
    double ball=0;
    for(int i=0;i<q;i++)
    {
        cin >> at1 >> at2 >> fin >> kr;
        krd+=kr;
        if((at1+at2 < 30) || (fin <20)) continue;
        ball+=(jojo[at1+at2+fin]*kr);
    }
    cout << ball/krd;
}