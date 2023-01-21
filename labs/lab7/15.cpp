#include <bits/stdc++.h>

using namespace std;
int w[1000];

int haha(int q, int a)
{
    int z=0;

    while(q>0)
    {
        w[z] = q%a;
        q/=a;
        z++;
        

    }
    for(int i=z-1;i>=0;i--)
    {
        cout << w[i];
    }


}
char ww[1000];
char kuku(int q, int a)
{
    int i=0;
    while(q>0)
    {
        if(q%a <=9)
        {
            ww[i] = q%a+(int)('0');
        }
        else{
            ww[i] = char((((q%a)-10)+'A'));
        }
        q/=a;
        i++;
    }
    for(int s = i-1;s>=0;s--)
    {
        cout << ww[s];
    }
}



int main()
{
    int q, a;
    cin >> q >> a;
    if(a<=10)
    {
    haha(q, a);
    }
    else
    {
        kuku(q, a);
    }
}